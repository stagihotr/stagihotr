import utils.helpers as helpers
import time

opcoes_levantar = ["levantar", "up", "get_up",
                   "get up", "bring_up", "bring up", "rise"]

opcoes_sentar = ["sentar", "down", "sit"]

opcoes_andar = ["andar", "walk", "go"]

opcoes_voltar = ["voltar", "return", "back", "come_back", "come back"]


def cadastrar(nome_arquivo, _, db, __):
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
            levantar = "1"
            sentar = "2"
            andar = "3"
            voltar = "4"

            movimentos = {
                "levantar": levantar,
                "up": levantar,
                "get_up": levantar,
                "get up": levantar,
                "bring_up": levantar,
                "bring up": levantar,
                "rise": levantar,

                "sentar": sentar,
                "down": sentar,
                "sit": sentar,

                "andar": andar,
                "walk": andar,
                "go": andar,

                "voltar": voltar,
                "return": voltar,
                "back": voltar,
                "come_back": voltar,
                "come back": voltar
            }

            nao_concluido = "0"
            concluido = "1"
            st = {
                "nao_concluido": nao_concluido,
                "nao concluido": nao_concluido,
                "not completed": nao_concluido,
                "not_ok": nao_concluido,
                "not": nao_concluido,
                "false": nao_concluido,
                "not_done": nao_concluido,
                "not done": nao_concluido,
                "0": nao_concluido,

                "concluido": concluido,
                "completed": concluido,
                "ok": concluido,
                "true": concluido,
                "done": concluido,
                "1": concluido
            }

            movimento_final = movimentos.get(
                str(movimento['movimento'].lower()))
            status_final = st.get(str(movimento['status'].lower()))

            if not movimento_final:
                print("Movimento não encontrado!")
                return

            if not status_final:
                print("Status não encontrado!")
                return

            movimento['movimento'] = movimento_final
            movimento['status'] = status_final

            url = 'stagihotr.paciente.MovimentoParticipant'
            status, response = helpers.enviar_req(url, movimento)
            if status:
                helpers.insert_db("movimento", movimento, db)
                print("Movimento {} cadastrado com sucesso!".format(movimentoId))
            else:
                print(response)
                print("Erro ao cadastrar movimento {}!".format(movimentoId))
            time.sleep(1)


def obter_pelo_hash(nome_arquivo, arquivo_final, _, opcoes_movimentos):
    if not arquivo_final:
        raise ValueError("FILE_OUT obrigatório")
    hashs = helpers.ler_arquivo(nome_arquivo)
    if hashs._values.any():
        url = 'stagihotr.paciente.MovimentoParticipant'
        status, response = helpers.enviar_req(url)
        if status:
            response = [
                x for x in response if x['movimento'].strip().lower() in opcoes_movimentos]
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
            print("Erro ao listar movimentos!")
