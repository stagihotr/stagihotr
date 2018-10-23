module.exports.enviar_requisicao = enviar_requisicao

const axios = require("axios");
const base_url = 'http://35.232.70.182:3000/api/'

async function enviar_requisicao(url, data) {
    return axios.post(`${base_url}${url}`, data);
};