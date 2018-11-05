import utils.movimentos as movimentos
import utils.pacientes as pacientes
import utils.parse_args as parse_args
from database import db

if __name__ == "__main__":
    try:
        parser = parse_args.create_parser()
        options = {
            1: {
                "msg": "Cadastro de pacientes",
                "func": pacientes.cadastrar
            },
            2: {
                "msg": "Cadastro do movimento de sentar",
                "func": movimentos.cadastrar
            },
            3: {
                "msg": "Cadastro do movimento de levantar",
                "func": movimentos.cadastrar
            },
            4: {
                "msg": "Listagem de todos os pacientes",
                "func": pacientes.listar
            },
            5: {
                "msg": "Listagem do paciente pelo ID",
                "func": pacientes.obter_pelo_id
            },
            6: {
                "msg": "Listagem dos movimentos de sentar do paciente",
                "func": movimentos.obter_pelo_hash,
                "mov": movimentos.opcoes_sentar
            },
            7: {
                "msg": "Listagem dos movimentos de levantar do paciente",
                "func": movimentos.obter_pelo_hash,
                "mov": movimentos.opcoes_levantar
            },
            8: {
                "msg": "Cadastro do movimento de andar",
                "func": movimentos.cadastrar
            },
            9: {
                "msg": "Cadastro do movimento de voltar",
                "func": movimentos.cadastrar
            },
            10: {
                "msg": "Listagem dos movimentos de andar do paciente",
                "func": movimentos.obter_pelo_hash,
                "mov": movimentos.opcoes_andar
            },
            11: {
                "msg": "Listagem dos movimentos de voltar do paciente",
                "func": movimentos.obter_pelo_hash,
                "mov": movimentos.opcoes_voltar
            }

        }
        option = int(parser.option)
        filename_in = parser.file_in
        filename_out = parser.file_out

        if option in options:
            op = options[option]
            print("\n***** {} {}!".format(op['msg'], "selecionado"))
            if callable(op['func']):
                mov = [None, None]
                if op.get('mov'):
                    mov = op['mov']
                op['func'](filename_in, filename_out, db, mov)
                print("\n***** {} {}!".format(op['msg'], "concluído"))
            else:
                print("Metodo nao implementado!")
        else:
            print("\n***** Opcao nao encontrada!")
    except Exception as e:
        print("Ocorreu um erro:")
        print(str(e))
