module.exports.validar_req_pacientes = validar_req_pacientes

function validar_req_pacientes(req) {
    req.checkBody("pacienteId", "pacienteId é obrigatório").notEmpty();
    req.checkBody("nome", "nome é obrigatório").notEmpty();
    req.checkBody("cpf", "cpf é obrigatório").notEmpty();
    req.checkBody("data_nascimento", "data_nascimento é obrigatório").notEmpty();
    req.checkBody("telefone", "telefone é obrigatório").notEmpty();
    req.checkBody("municipio", "municipio é obrigatório").notEmpty();
    req.checkBody("uf", "uf é obrigatório").notEmpty();
    req.checkBody("logradouro", "logradouro é obrigatório").notEmpty();
    req.checkBody("numero", "numero é obrigatório").notEmpty();
    req.checkBody("complemento", "complemento é obrigatório").notEmpty();
    req.checkBody("bairro", "bairro é obrigatório").notEmpty();
    req.checkBody("cep", "cep é obrigatório").notEmpty();
    req.checkBody("observacao", "observacao é obrigatório").notEmpty();

    return req.validationErrors();
}