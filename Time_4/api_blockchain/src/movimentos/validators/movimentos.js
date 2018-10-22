module.exports.validar_req_movimentos = validar_req_movimentos

function validar_req_movimentos(req) {
    req.checkBody("movimentoId", "movimentoId é obrigatório").notEmpty();
    req.checkBody("pacienteHash", "pacienteHash é obrigatório").notEmpty();
    req.checkBody("status", "status é obrigatório").notEmpty();
    req.checkBody("movimento", "movimento é obrigatório").notEmpty();
    req.checkBody("data", "data é obrigatório").notEmpty();
    req.checkBody("observacao", "observacao é obrigatório").notEmpty();

    return req.validationErrors();
}
