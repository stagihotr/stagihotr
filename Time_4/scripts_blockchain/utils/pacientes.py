import utils.helpers as helpers
import time


def cadastrar(nome_arquivo, _, db, __):
    pacientes_csv = helpers.ler_arquivo(nome_arquivo)
    if pacientes_csv._values.any():
        for item in pacientes_csv._values:
            pacienteId = helpers.validar_str(item[0])
            paciente = {
                "pacienteId": pacienteId,
                "nome": helpers.validar_str(item[1]),
                "cpf": helpers.validar_str(item[2]),
                "data_nascimento": helpers.validar_str(item[3]),
                "telefone": helpers.validar_str(item[4]),
                "municipio": helpers.validar_str(item[5]),
                "uf": helpers.validar_str(item[6]),
                "logradouro": helpers.validar_str(item[7]),
                "numero": helpers.validar_str(item[8]),
                "complemento": helpers.validar_str(item[9]),
                "bairro": helpers.validar_str(item[10]),
                "cep": helpers.validar_str(item[11]),
                "observacao": helpers.validar_str(item[12])
            }
            url = 'stagihotr.paciente.PacienteParticipant'
            status, response = helpers.enviar_req(url, paciente)
            if status:
                helpers.insert_db("paciente", paciente, db)
                print("Paciente {} cadastrado com sucesso!".format(pacienteId))
            else:
                print(response)
                print("Erro ao cadastrar paciente {}!".format(pacienteId))
            time.sleep(1)


def listar(_, arquivo_final, __, ___):
    if not arquivo_final:
        raise ValueError("FILE_OUT obrigatório")
    url = 'stagihotr.paciente.PacienteParticipant'
    status, response = helpers.enviar_req(url)
    if status:
        dados = "pacienteId, nome, cpf, data_nascimento, telefone, municipio, uf, logradouro, numero, complemento, bairro, cep, observacao\n"
        for item in response:
            dados += ','.join([
                item["pacienteId"],
                item["nome"],
                item["cpf"],
                item["data_nascimento"],
                item["telefone"],
                item["municipio"],
                item["uf"],
                item["logradouro"],
                item["numero"],
                item["complemento"],
                item["bairro"],
                item["cep"],
                item["observacao"]
            ]) + "\n"
        file_out = open(arquivo_final, 'w')
        file_out.write(dados)
        file_out.close()
    else:
        print("Erro ao listar pacientes!")


def obter_pelo_id(nome_arquivo, arquivo_final, _, __):
    if not arquivo_final:
        raise ValueError("FILE_OUT obrigatório")
    with open(nome_arquivo, 'r') as f:
        pacienteId = f.readline()
    print("Id buscado: " + pacienteId)
    url = 'stagihotr.paciente.PacienteParticipant/' + pacienteId
    status, response = helpers.enviar_req(url)
    if status:
        file_out = open(arquivo_final, 'w')
        file_out.write(str(response))
        file_out.close()
        print("Pesquisa concluida!")
    else:
        print("Erro ao buscar Id do Paciente!")
