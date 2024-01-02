var sms = 'Hello Neo, The Matrix has you...'; // {Strings}
var sms2 = 'Primitive Types for JavaScript.';
var sms3 = 1; // {int}
var sms4 = 1.5; // {float}
var sms6 = true; //{true, false} - bolean
var sms7 = null; // {null}
var sms8; // {Undefined}

function fx__lineBy(var_, _type_){
    document.write('<br> Hello _ Functions <br>', ' ',var_, ' ', _type_, '<br>');
    return '';
}


alert(sms);
alert(sms2);


document.write('int type: ' + sms3, '<br>');
document.write('float type: ', sms4 , '<br>');
document.write('bolean type: ', sms6 , '<br>');
document.write('null type: ', sms7 , '<br>');
document.write('undefined type: ', sms8 , '<br>');

var typee = 'int';
document.write(fx__lineBy(sms3, typee));

//Cont... 40/449