# API BLOCKCHAIN

API para a inserção e recuperação de informações no blockchain e influxDB.

Para rodar a API você possui duas opções:
  - via docker
  - via npm

Caso escolha via docker:
```sh
sudo docker pull gustavogomides/api-stagihotr-blockchain
sudo docker run -d -p 3007:3007 api-stagihotr-blockchain
```

Caso escolha via npm:
```sh
npm install
npm start
```

## Documentação dos endpoints


### CADASTRAR PACIENTES
---

```sh
POST - https://ts04stagihotr.herokuapp.com/pacientes
```

#### BODY

```json
{
"pacienteId": 7855,
"nome": "Adriana Neves",
"cpf": "78009432083",
"data_nascimento": "20/10/1980",
"telefone": "(12)91112-2554",
"municipio": "SJC",
"uf":"SP",
"logradouro": "Rua UM",
"numero": 558,
"complemento": "-",
"bairro": "Centro",
"cep": "12231-058",
"observacao": "sem nenhum movimento"
}
``` 

***
***
***

### CADASTRAR MOVIMENTOS
---

```sh
https://ts04stagihotr.herokuapp.com/movimentos
```

#### BODY

```json
{
	"movimentoId": "5215",
	"pacienteHash": "5ac671ab1d364330a6394252e74ec36f",
	"status":"nao concluido",
	"movimento": "sentar",
	"data": "2018-10-26T12:29",
	"observacao": "mais um"
}
``` 
#### Status disponíveis
| Status | Opções |
| ------ | ------ |
| nao concluído | nao_concluido, nao concluido, not completed, not_ok, not, false, not_done, not done, 0 |
| concluído | concluido, completed, ok, true, done, 1 |

#### Movimentos disponíveis
| Movimento | Opções |
| ------ | ------ |
| levantar | levantar, up, get_up, get up, bring_up, bring up, rise |
| sentar | sentar, down, sit |
| andar | andar, walk, go |
| voltar | voltar, return, back, come_back, come back |
