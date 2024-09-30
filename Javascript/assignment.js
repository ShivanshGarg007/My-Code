// Challenge 1: Create an Array "myFavSuperheroes" and add all your favourite superhero names as an array element.(['Spider-Man', 'Batman', 'Iron Man', 'Wonder Woman', 'Superman'])

var myFavSuperheroes = [
    'Spider-Man',
    'Batman',
    'Iron Man',
    'Wonder Woman',
    'Superman',
  ];
  
  function createSuperheroesArray() {
    return myFavSuperheroes;
  }
  
  // Challenge 2: Print (in console) the first superhero's name in your array "myFavSuperheroes".
  function getFirstSuperhero(superheroes) {
    return myFavSuperheroes[0];
  }
  
  // Challenge 3: Print (in console) the length of the array "myFavSuperheroes".
  function getArrayLength(superheroes) {
    return myFavSuperheroes.length;
  }
  
  // Challenge 4: Change the second last element in the Array "myFavSuperheroes" to your name and print the second last element in the array "myFavSuperheroes".
  
  function changeSecondLastElement(superheroes, name) {
    superheroes[myFavSuperheroes.length - 2] = name;
  
    return superheroes[myFavSuperheroes.length - 2];
  }
  
  // Challenge 5: Add your friend's name (friend 1) to the array "myFavSuperheroes" at the start without using the splice method.
  function addFriendAtStart(superheroes, friend1) {
    myFavSuperheroes.unshift(friend1);
  
    return superheroes;
  }
  
  // Challenge 6: Remove your friend's name (friend1) in the array "myFavSuperheroes" without using the splice method.
  function removeFriendAtStart(superheroes) {
  
    
    superheroes.shift();
    return superheroes;
  }
