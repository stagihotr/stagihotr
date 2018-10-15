from typing import TextIO

import utils.helpers as helpers
import json


def cadastrar(nome_arquivo, _):
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
                print("Paciente {} cadastrado com sucesso!".format(pacienteId))
            else:
                print(response)
                print("Erro ao cadastrar paciente {}!".format(pacienteId))


def listar(nome_arquivo):
    pass


def obter_pelo_id(id, arquivo_final):
    if not arquivo_final:
        raise ValueError("FILE_OUT obrigatório")
    with open(id, 'r') as f:
        pacienteId = f.readline()
    print("Id buscado: " + pacienteId)
    url = 'stagihotr.paciente.PacienteParticipant/' + pacienteId
    status, response = helpers.enviar_req(url)
    if status:
        file_out: TextIO = open(arquivo_final, 'w')
        file_out.write(str(response))
        file_out.close()
        print("Pesquisa concluida!")
    else:
        print("Erro ao buscar Id do Paciente!")
