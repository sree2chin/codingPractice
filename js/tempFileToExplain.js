var somefunction = function(A, func) {
	var result = func(A); // callback as a parameter
	return result;
}

var callback = function(A) {
	var sum = 0;
	for(var i = 0; i < A.length; i++) {
		sum = sum + A[i];
	}
	return sum;
}

var a = [1,2,3];

console.log(somefunction(a, callback));

// ---------------------------------------------------
var cb = function(request, response) {//when hit main url   
	response.render('pages/index'); 
}
app.get('/', cb);