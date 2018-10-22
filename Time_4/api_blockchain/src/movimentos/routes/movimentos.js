var express = require('express'),
    router = express.Router(),
    bodyParser = require('body-parser'),
    urlencodedParser = bodyParser.urlencoded({ extended: false }),
    controller = require('./../controllers/movimentos');

router.post('/', urlencodedParser, function (req, res) {
    controller.cadastrar_movimento(req, res)
});

router.get('/', urlencodedParser, function (req, res) {
    res.status(500);
    res.json({ message: "Endpoint sem implementação!", success: false })
});

module.exports = router;
