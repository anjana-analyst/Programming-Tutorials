//complex object
var myMusic = [
  {
    "artist": "Billy Joel",
    "title": "Piano Man",
    "release_year": 1973,
    "formats": [
      "CD",
      "8T",
      "LP"
    ],
    "gold": true
  },
  {
    "artist": "David Letterman",
    "title" : "YOU",
    "release_year":2020,
    "formats": [
      "CD",
      "8T",
      "LP"
    ],
    "gold": true

  }
];

//To Access the Object
ar myStorage = {
  "car": {
    "inside": {
      "glove box": "maps",
      "passenger seat": "crumbs"
     },
    "outside": {
      "trunk": "jack"
    }
  }
};

var gloveBoxContents =myStorage.car.inside["glove box"];

//to access nested arrays
var myPlants = [
  {
    type: "flowers",
    list: [
      "rose",
      "tulip",
      "dandelion"
    ]
  },
  {
    type: "trees",
    list: [
      "fir",
      "pine",
      "birch"
    ]
  }
];

var secondTree = myPlants[1].list[1]; 

//Record Collection
var collection = {
  2548: {
    albumTitle: 'Slippery When Wet',
    artist: 'Bon Jovi',
    tracks: ['Let It Rock', 'You Give Love a Bad Name']
  },
  2468: {
    albumTitle: '1999',
    artist: 'Prince',
    tracks: ['1999', 'Little Red Corvette']
  },
  1245: {
    artist: 'Robert Palmer',
    tracks: []
  },
  5439: {
    albumTitle: 'ABBA Gold'
  }
};
function updateRecords(object, id, prop, value) 
{
  if(prop!='tracks' && value!='')
  {
    object[id][prop]=value;
  }
  else if(prop=='tracks' && !object[id].hasOwnProperty("tracks"))
  {
    object[id][prop]=[value];
  }
  else if(prop=='tracks' && value!="")
  {
    object[id][prop].push(value);
  }
  else if(value=="")
  {
    delete object[id][prop];
  }
  return object;
}

updateRecords(collection, 5439, 'artist', 'ABBA');
