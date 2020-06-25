var email = document.forms['form']['email'];

var psw = document.forms['form']['psw'];

var email_error = document.getElementById('email_error');
var psw_error = document.getElementById('psw_error');

email.addEventListener('textInput', email_Verify);
psw.addEventListener('textInput', psw_Verify);

function validated() {
	if (email.value.length < 0) {
		email.style.border = "1px solid red";

		email_error.style.display = 'block';
		email.focus();
		return false;
	}

	if (psw.value.length < 6) {
		psw.style.border = "1px solid red";

		psw_error.style.display = 'block';
		psw.focus();
		return false;
	}
}

function email_Verify() {
	if (email.value.length >= 8) {
		email.style.border = "1px solid silver";

		email_error.style.display = 'none';
		return true;
	}
}

function psw_Verify() {
	if (psw.value.length >= 6) {
		psw.style.border = "1px solid silver";

		psw_error.style.display = 'none';
		return true;
	}
}