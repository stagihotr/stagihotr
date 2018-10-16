exports.command_wrapper_no_error = function () {
    return 0;
}

exports.command_wrapper_length_error = function () {
    return 1;
}

exports.command_wrapper_content_error = function () {
    return 2;
}


exports.default_pacient = function () {
    return 00001;
}


exports.command_length = function () {
    return 75;
}


exports.header_index = function () {
    return 0;
}
exports.header_length = function () {
    return 6;
}

exports.topic_index = function () {
    return 6;
}
exports.topic_length = function () {
    return 6;
}
 


exports.from_index = function () {
    return 12;
}
exports.from_length = function () {
    return 6;
} 


exports.to_index = function () {
    return 18;
}
exports.to_length = function () {
    return 6;
} 

exports.type_index = function () {
    return 24;
}
exports.type_length = function () {
    return 2;
}

exports.intensity_index = function () {
    return 26;
}
exports.intensity_length = function () {
    return 1;
}

exports.complementary_info_index = function () {
    return 27;
}        
exports.complementary_info_length = function () {
    return 3;
}

exports.reserved_index = function () {
    return 30
}
exports.reserved_length = function () {
    return 1;
}

exports.status_index = function () {
    return 31;
}
exports.status_length = function () {
    return 2;
}

exports.timestamp_index = function () {
    return 33;
}
exports.timestamp_length = function () {
    return 10;
}

exports.content_validation_index = function () {
    return 43;
}
exports.content_validation_length = function () {
    return 32;
}