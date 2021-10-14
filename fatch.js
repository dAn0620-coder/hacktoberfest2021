// AUTHOR: IJAYZZ
// JavaScript Concept: Fetch API
// GITHUB: https://github.com/ijayzz

//FETCH API

//So, fetch is bascially a way to call you API's.


//The Fetch API provides a JavaScript interface for accessing and manipulating parts of the HTTP pipeline, such as requests and responses.
//A fetch function is provided in the global window scope, with the first argument being the URL.

// So an example to use the fetch api can be:

fetch("https://jsonplaceholder.typicode.com/todos/1")
    .then((response) => response.json())
    .then((json) => console.log(json));


fetch("https://jsonplaceholder.typicode.com/todos/1")
    .then((response) => response.json())
    .then((json) => console.log(json))
    .catch((err) => console.log(err));


if (res.status == 500) {
    console.log("Internal server error");
} else if (res.status == 504) {
    console.log("504 Gateway Timeout");
}
