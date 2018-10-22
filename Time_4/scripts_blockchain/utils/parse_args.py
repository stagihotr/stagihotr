import argparse
import textwrap


class SmartFormatter(argparse.RawDescriptionHelpFormatter):

    def _split_lines(self, text, width):
        if text.startswith('R|'):
            return text[2:].splitlines()
        return argparse.RawDescriptionHelpFormatter._split_lines(self, text, width)


def create_parser():
    description = textwrap.dedent(
        'Script para inserção e recuperação das informações do blockchain.\n')

    epilog = textwrap.dedent('''Exemplos:
        python3 app.py -op 1 -in /home/user/Documents/csv/pacientes.csv
        python3 app.py --option 3 --file_in /home/user/Documents/csv/pacientes.csv
        python3 app.py -op 7 -in /home/user/Documents/csv/pacientesID.csv -out /home/user/Documents/csv/pacientes.csv
        \n''')

    options = '''R|Algumas opções, onde
        1 = Cadastrar Paciente
        2 = Cadastrar Movimento de Sentar
        3 = Cadastrar Movimento de Levantar        
        4 = Listar Todos Pacientes e salvar em CSV
        5 = Listar Paciente pelo ID e salvar em CSV
        6 = Listar Movimentos de Sentar de um Paciente e salvar em CSV
        7 = Listar Movimentos de Levantar de um Paciente e salvar em CSV
    '''

    file_in = '''Path absoluto do arquivo .csv para a leitura dos dados ou hash de pacientes'''

    file_out = '''R|Path onde o arquivo .csv com os dados serão salvos
        Obs.: Obrigatório para as opções de 4 a 7
    '''

    parser = argparse.ArgumentParser(
        prog='python3 app.py',
        description=description,
        epilog=epilog,
        formatter_class=SmartFormatter)

    parser._action_groups.pop()

    required = parser.add_argument_group('Argumentos Obrigatorios')
    required.add_argument('-op', '--option', type=str,
                          help=options, choices=['1', '2', '3', '4', '5', '6', '7'], required=True)
    required.add_argument('-in', '--file_in', type=str,
                          help=file_in, required=True)

    optional = parser.add_argument_group('Argumentos Opcionais')
    optional.add_argument('-out', '--file_out', type=str, help=file_out)
    return parser.parse_args()
