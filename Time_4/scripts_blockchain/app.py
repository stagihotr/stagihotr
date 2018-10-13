import utils.movimento_levantar as levantar
import utils.pacientes as pacientes
import utils.parse_args as parse_args

if __name__ == "__main__":
    try:
        parser = parse_args.create_parser()
        options = {
            1: {
                "msg": "Cadastro de pacientes selecionado!",
                "func": pacientes.cadastrar
            },
            2: {
                "msg": "Cadastro do movimento de sentar selecionado!",
                "func": ""
            },
            3: {
                "msg": "Cadastro do movimento de levantar selecionado!",
                "func": levantar.cadastrar
            },
            4: {
                "msg": "Listagem de todos os pacientes selecionado!",
                "func": ""
            },
            5: {
                "msg": "Listagem do paciente pelo ID selecionado!",
                "func": ""
            },
            6: {
                "msg": "Listagem dos movimentos de sentar do paciente selecionado!",
                "func": ""
            },
            7: {
                "msg": "Listagem dos movimentos de levantar do paciente selecionado!",
                "func": levantar.obter_pelo_hash
            }
        }
        option = int(parser.option)
        filename_in = parser.file_in
        filename_out = parser.file_out

        if option in options:
            op = options[option]
            print("\n***** {}".format(op['msg']))
            if callable(op['func']):
                op['func'](filename_in, filename_out)
            else:
                print("Metodo nao implementado!")
        else:
            print("\n***** Opcao nao encontrada!")
    except Exception as e:
        print("Ocorreu um erro:")
        print(str(e))
