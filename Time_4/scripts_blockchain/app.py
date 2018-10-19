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
                "func": ""
            },
            6: {
                "msg": "Listagem dos movimentos de sentar do paciente",
                "func": movimentos.obter_pelo_hash,
                "mov": "sentar,down"
            },
            7: {
                "msg": "Listagem dos movimentos de levantar do paciente",
                "func": movimentos.obter_pelo_hash,
                "mov": "levantar,up"
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
                if 'mov' in op:
                    mov = op['mov'].split(',')
                op['func'](filename_in, filename_out, db, mov[0], mov[1])
                print("\n***** {} {}!".format(op['msg'], "concluído"))
            else:
                print("Metodo nao implementado!")
        else:
            print("\n***** Opcao nao encontrada!")
    except Exception as e:
        print("Ocorreu um erro:")
        print(str(e))
