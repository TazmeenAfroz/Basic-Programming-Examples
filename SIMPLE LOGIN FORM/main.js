// //dom , document object model
// const ul = document.querySelector('.items');
// // ul.remove();
// // ul.lastElementChild.remove();
// ul.firstElementChild.textContent = 'Forget Password';
// ul.children[1].innerText = 'back';
// ul.lastElementChild.innerHTML = '<h3>SIGN UP</h3>';

// const btn = document.querySelector('.btn');
// btn.style.background = 'blue';



//  btn.addEventListener('mouseout', (e) => {
//     e.preventDefault();
//   document.querySelector('#my-form').style.background = 'lightpink';
// });
// btn.addEventListener('click', (e) => {
//     e.preventDefault();
//     document.querySelector('#my-form').style.background = 'lightblue';
//     document.querySelector('body').classList.add('bg-dark');
//     document.querySelector('.items').lastElementChild.innerHTML = '<h1>Thank you</h1>';
//     }
// );

const myForm = document.querySelector('#my-form');
const nameInput = document.querySelector('#name');
const emailInput = document.querySelector('#email');
const msg = document.querySelector('.msg');
const userList = document.querySelector('.items');
myForm.addEventListener('submit', onSubmit);
function onSubmit(e) {
    e.preventDefault();
    if(nameInput.value === '' || emailInput.value === '') {
        msg.classList.add('error');
        msg.innerHTML = 'Please enter all fields';
        setTimeout(() => msg.remove(), 3000);
    } else {
        const li = document.createElement('li');
        li.appendChild(document.createTextNode(`${nameInput.value} : ${emailInput.value}`));
        userList.appendChild(li);
        //clear fields
        nameInput.value = '';
        emailInput.value = '';
    }
}
