import utils.helpers as helpers
import time


def cadastrar(nome_arquivo, _, db):
    moviments_csv = helpers.ler_arquivo(nome_arquivo)
    if moviments_csv._values.any():
        for item in moviments_csv._values:
            movimentoId = helpers.validar_str(item[0])
            movimento = {
                "movimentoId": movimentoId,
                "pacienteHash": helpers.validar_str(item[1]),
                "status": helpers.validar_str(item[2]),
                "movimento": helpers.validar_str(item[3]),
                "data": helpers.validar_str(item[4]),
                "observacao": helpers.validar_str(item[5])
            }
            url = 'stagihotr.paciente.MovimentoParticipant'
            status, response = helpers.enviar_req(url, movimento)
            if status:
                helpers.insert_db("movimentos", movimento, db)
                print("Movimento {} cadastrado com sucesso!".format(movimentoId))
            else:
                print(response)
                print("Erro ao cadastrar movimento {}!".format(movimentoId))
            time.sleep(1)


def obter_pelo_hash(nome_arquivo, arquivo_final, _):
    if not arquivo_final:
        raise ValueError("FILE_OUT obrigatório")
    hashs = helpers.ler_arquivo(nome_arquivo)
    if hashs._values.any():
        url = 'stagihotr.paciente.MovimentoParticipant'
        status, response = helpers.enviar_req(url)
        if status:
            response = [
                x for x in response if x['movimento'].lower() == 'levantar' or x['movimento'].lower() == 'up']
            dados = "movimentoId, pacienteHash, status, movimento, data, observacao\n"
            for item in hashs._values:
                movimentos = [x for x in response if x['pacienteHash'] == item]
                for mov in movimentos:
                    dados += ','.join([mov['movimentoId'], mov['pacienteHash'], mov['status'],
                                       mov['movimento'], mov['data'], mov['observacao']]) + "\n"
            file_out = open(arquivo_final, 'w')
            file_out.write(dados)
            file_out.close()
        else:
            print("Erro ao listar movimentos de levantar!")
