//arguments

/*const spk=function(name='Ludgwik',age='35'){
    console.log(`good day ${name} ${age}`);
};

spk;
spk('ymuos','56');
*/

/*const area=(radius)=>{
    return 3.14*radius*radius;
}

console.log('area is ',$(area(5)));*/

/*let people=['mario','jdsknf','fsfs','sfs','essa '];
const logPerson= (person,index)=>{

    console.log(`${index}--hello ${person}`);
    };
	

people.forEach(logPerson);*/

//object literal vid 38

let user = {
    name: 'crystal',
    age: 52,
    place: 'Kolkata',
    blogs: ['ab', 'cd', 'ef'],
    login: function () {
        console.log('the user is logged in');
    },
    logout() {
        console.log("Log me out");
    },
    logBlocks: function () {
        //console.log(this.blogs);   
        console.log("This users has written the fillowing studds");
        this.blogs.forEach(blogs => {
            console.log(blogs);
        })
    }
};

//console.log(user.name);

//console.log(user['name']);
//console.log(typeof user.login);

//this key word

//console.log(this); 
user.logBlocks();
user.logout();