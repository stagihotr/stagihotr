import utils.helpers as helpers
import time


def cadastrar(nome_arquivo, _, db):
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
                helpers.insert_db("pacientes", paciente, db)
                print("Paciente {} cadastrado com sucesso!".format(pacienteId))
            else:
                print(response)
                print("Erro ao cadastrar paciente {}!".format(pacienteId))
            time.sleep(1)


def listar(nome_arquivo):
    pass


def obter_pelo_id(nome_arquivo):
    pass
