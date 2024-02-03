#include "game.h"

ques_t math[20]={
    {.question="the sin(30) is", .answer[0]="1", .answer[1]="0.5", .answer[2]="0", .answer[3]="undefined", .correct_answer=2, .hint="its the ratio of oppist length to the hypotnth"},
    {.question="If a centimetre equates to roughly 0.4 inches, how many inches is 10cm? ", .answer[0]="2.5", .answer[1]="4", .answer[2]="3", .answer[3]="1", .correct_answer=2, .hint="the 5 cm has 2 inchs"},
    {.question=" Find the missing terms in multiple of 3: 3, 6, 9, __, 15", .answer[0]="11", .answer[1]="10", .answer[2]="12", .answer[3]="13", .correct_answer=3, .hint="find the pattern :)"},
    {.question="50 times of 8 is equal to", .answer[0]="80", .answer[1]="800", .answer[2]="400", .answer[3]="4000", .correct_answer=3, .hint="50 * 8 !!"},
    {.question="Determine the median of the following numbers: 2, 4, 5, 7, 9", .answer[0]="5", .answer[1]="10", .answer[2]="0", .answer[3]="1", .correct_answer=1, .hint="the magntuid of a complex number is the same as measuring a hyptones in a right angel tringle"},
    {.question="factorial of 5?",.answer[0]="120", .answer[1]="150" , .answer[2]= "140", .answer[3]= "130", .correct_answer=1 ,.hint="factorial is matiplction of the perviouse numbers"}, 
    {.question="the sin(30) is", .answer[0]="1", .answer[1]="0.5", .answer[2]="0", .answer[3]="undefined", .correct_answer=2,.hint="its the ratio of oppist length to the hypotnth"},
    {.question="what is the magntuid of 3+4i", .answer[0]="5", .answer[1]="10", .answer[2]="0", .answer[3]="1", .correct_answer=1,.hint="the magntuid of a complex number is the same as measuring a hyptones in a right angel tringle"},
    {.question="in coding 3!=2 return 1 or 0",.answer[0]="1", .answer[1]="runtime error", .answer[2]="0", .answer[3]="undefined", .correct_answer=1,.hint="! means not"},
    {.question="tan(theta) = cos(theta)/sin(theta) ? (yes or no)",.answer[0]="no", .answer[1]="yes", .answer[2]="0", .answer[3]="undefined", .correct_answer=1,.hint="tan is the opposit over the adjecint "},
    {.question="how many bits for char ",.answer[0]="4", .answer[1]="8", .answer[2]="16", .answer[3]="32", .correct_answer=2,.hint="char is short for charchter "},
    {.question="in coding does charrchters have the same number of bits as intigers",.answer[0]="yes", .answer[1]="no", .answer[2]="0", .answer[3]="undefined", .correct_answer=2,.hint="intiger has 4 bits"},
    {.question="Adding the numbers between 1 to 100 consecutively (1+2+3+4+…) gives you what final answer? ",.answer[0]="4851", .answer[1]="4950", .answer[2]="4753", .answer[3]="5050", .correct_answer=2,.hint="n*(n+1)/2"},
    {.question="what is the diffreence btween the sum of two supplementary and two complementary angle",.answer[0]="270", .answer[1]="90", .answer[2]="180", .answer[3]="360", .correct_answer=2 ,.hint="the sum of two complementary angle is 90"},
    {.question="Who is the Father of Mathematics?",.answer[0]="Archimedes", .answer[1]="Albert Einstein", .answer[2]="Leonhard Euler", .answer[3]="Eratosthenes", .correct_answer = 1,.hint="he was from anciant greek"},
    {.question="Who developed an easy method to find out all the Prime Numbers?",.answer[0]="Archimedes", .answer[1]="Albert Einstein", .answer[2]="Leonhard Euler", .answer[3]="Eratosthenes", .correct_answer = 4 , .hint="&& is and gate"},
    {.question="the cos(60) is",.answer[0]="1", .answer[1]="0.5", .answer[2]="undefined", .answer[3]="0.5 * ((3)^(1/3)) ", .correct_answer=2,.hint="equel to sin(30) and there sum is 1"},
    {.question="what is the sum of two supplemntary angle",.answer[0]="270", .answer[1]="90", .answer[2]="180", .answer[3]="360", .correct_answer=3,.hint="straghit angle"},
    {.question="in coding 1|0 returns what",.answer[0]="0", .answer[1]="1", .answer[2]="0", .answer[3]="32", .correct_answer=2,.hint=" | is or gate"},
    {.question="123+4-5+67-89 = ? ",.answer[0]="90", .answer[1]="100", .answer[2]="150", .answer[3]="200", .correct_answer=2,.hint="a hypotnes squred is the sum of the square of the other sides"}
};


ques_t sport[20]={
    {.question="Which country won the FIFA World Cup in 2018?", .answer[0]="Brazil", .answer[1]="Germany", .answer[2]="France", .answer[3]="Spain", .correct_answer=2, .hint="The tournament was held in Russia."},
    {.question="Who is considered the greatest basketball player of all time?", .answer[0]="Kobe Bryant", .answer[1]="LeBron James", .answer[2]="Michael Jordan", .answer[3]="Magic Johnson", .correct_answer=2, .hint="He won six NBA championships with the Chicago Bulls."},
    {.question="Which team has won the most Super Bowl titles in NFL history?", .answer[0]="New England Patriots", .answer[1]="Pittsburgh Steelers", .answer[2]="Dallas Cowboys", .answer[3]="San Francisco 49ers", .correct_answer=0, .hint="Tom Brady played for this team for many years."},
    {.question="Who holds the record for the most home runs in Major League Baseball?", .answer[0]="Babe Ruth", .answer[1]="Barry Bonds", .answer[2]="Hank Aaron", .answer[3]="Alex Rodriguez", .correct_answer=1, .hint="He hit 762 home runs in his career."},
    {.question="Which country has won the most Olympic gold medals?", .answer[0]="United States", .answer[1]="China", .answer[2]="Russia", .answer[3]="Germany", .correct_answer=0, .hint="They won the most medals in the 2020 Tokyo Olympics."},
    {.question="Who is the current Formula 1 World Champion?", .answer[0]="Lewis Hamilton", .answer[1]="Sebastian Vettel", .answer[2]="Max Verstappen", .answer[3]="Charles Leclerc", .correct_answer=2, .hint="He races for Red Bull Racing."},
    {.question="Which country hosted the 2016 Summer Olympics?", .answer[0]="Brazil", .answer[1]="China", .answer[2]="United States", .answer[3]="Russia", .correct_answer=0, .hint="The host city was Rio de Janeiro."},
    {.question="Who holds the record for the most goals scored in a single NHL season?", .answer[0]="Wayne Gretzky", .answer[1]="Mario Lemieux", .answer[2]="Bobby Orr", .answer[3]="Alexander Ovechkin", .correct_answer=0, .hint="He scored 92 goals in the 1981-1982 season."},
    {.question="Which team has won the most NBA championships?", .answer[0]="Los Angeles Lakers", .answer[1]="Chicago Bulls", .answer[2]="Boston Celtics", .answer[3]="Golden State Warriors", .correct_answer=2, .hint="They have won 17 championships in total."},
    {.question="Who is the most decorated Olympian of all time?", .answer[0]="Usain Bolt", .answer[1]="Michael Phelps", .answer[2]="Simone Biles", .answer[3]="Serena Williams", .correct_answer=1, .hint="He has won a total of 23 gold medals."},
    {.question="Which country won the UEFA Euro 2020 tournament?", .answer[0]="Italy", .answer[1]="England", .answer[2]="France", .answer[3]="Germany", .correct_answer=0, .hint="They defeated England in the final."},
    {.question="Who is the current reigning champion of the UFC's heavyweight division?", .answer[0]="Francis Ngannou", .answer[1]="Stipe Miocic", .answer[2]="Jon Jones", .answer[3]="Derrick Lewis", .correct_answer=0, .hint="He won the title in March 2021."},
    {.question="Which team has won the most World Series titles in MLB history?", .answer[0]="New York Yankees", .answer[1]="Los Angeles Dodgers", .answer[2]="Boston Red Sox", .answer[3]="San Francisco Giants", .correct_answer=0, .hint="They have won 27 championships."},
    {.question="Who is the current women's singles tennis world number one?", .answer[0]="Naomi Osaka", .answer[1]="Simona Halep", .answer[2]="Ashleigh Barty", .answer[3]="Serena Williams", .correct_answer=2, .hint="She is from Australia."},
    {.question="Which country has won the most Rugby World Cup titles?", .answer[0]="New Zealand", .answer[1]="South Africa", .answer[2]="Australia", .answer[3]="England", .correct_answer=0, .hint="They have won the tournament three times."},
    {.question="Who won the Wimbledon Men's Singles title in 2021?", .answer[0]="Roger Federer", .answer[1]="Rafael Nadal", .answer[2]="Novak Djokovic", .answer[3]="Andy Murray", .correct_answer=2, .hint="He achieved a historic Grand Slam accomplishment this year."},
    {.question="Which team won the NBA Championship in the 2020-2021 season?", .answer[0]="Los Angeles Lakers", .answer[1]="Brooklyn Nets", .answer[2]="Golden State Warriors", .answer[3]="Milwaukee Bucks", .correct_answer=3, .hint="They were led by a dominant performance from their star player."},
    {.question="Who is the current Formula 1 World Champion as of 2022?", .answer[0]="Max Verstappen", .answer[1]="Lewis Hamilton", .answer[2]="Sebastian Vettel", .answer[3]="Charles Leclerc", .correct_answer=0, .hint="He races for Red Bull Racing."},
    {.question="Which golfer holds the record for the most Masters Tournament victories?", .answer[0]="Tiger Woods", .answer[1]="Jack Nicklaus", .answer[2]="Arnold Palmer", .answer[3]="Phil Mickelson", .correct_answer=1, .hint="He has won the prestigious tournament six times."},
    {.question="Who won the UEFA Champions League in the 2019-2020 season?", .answer[0]="Real Madrid", .answer[1]="Liverpool", .answer[2]="Bayern Munich", .answer[3]="Barcelona", .correct_answer=2, .hint="They achieved a treble-winning season."}
};

ques_t science[20]={
    {.question="What is the smallest unit of matter?", .answer[0]="Atom", .answer[1]="Molecule", .answer[2]="Cell", .answer[3]="Particle", .correct_answer=0, .hint="The building block of elements."},
    {.question="What is the study of living organisms called?", .answer[0]="Biology", .answer[1]="Chemistry", .answer[2]="Physics", .answer[3]="Geology", .correct_answer=0, .hint="It includes the study of plants, animals, and humans."},
    {.question="What force keeps objects on the Earth's surface?", .answer[0]="Gravity", .answer[1]="Friction", .answer[2]="Magnetism", .answer[3]="Electricity", .correct_answer=0, .hint="It pulls objects towards the center of the Earth."},
    {.question="What is the basic unit of life?", .answer[0]="Atom", .answer[1]="Cell", .answer[2]="Molecule", .answer[3]="Organism", .correct_answer=1, .hint="It is the structural and functional unit of all living organisms."},
    {.question="What is the process of plants converting sunlight into food called?", .answer[0]="Photosynthesis", .answer[1]="Respiration", .answer[2]="Fermentation", .answer[3]="Transpiration", .correct_answer=0, .hint="It involves the absorption of carbon dioxide and the release of oxygen."},
    {.question="What is the force that opposes the motion of objects through a fluid (liquid or gas)?", .answer[0]="Gravity", .answer[1]="Magnetism", .answer[2]="Drag", .answer[3]="Friction", .correct_answer=2, .hint="It is related to air resistance."},
    {.question="What is the process of a liquid turning into a gas called?", .answer[0]="Evaporation", .answer[1]="Condensation", .answer[2]="Sublimation", .answer[3]="Melting", .correct_answer=0, .hint="It occurs at the surface of the liquid."},
    {.question="What is the study of matter, energy, and their interactions called?", .answer[0]="Biology", .answer[1]="Chemistry", .answer[2]="Physics", .answer[3]="Geology", .correct_answer=2, .hint="It explains the fundamental principles of the universe."},
    {.question="What is the force that holds the nucleus of an atom together?", .answer[0]="Electromagnetic force", .answer[1]="Gravitational force", .answer[2]="Weak nuclear force", .answer[3]="Strong nuclear force", .correct_answer=3, .hint="It is responsible for binding protons and neutrons."},
    {.question="What is the basic unit of energy?", .answer[0]="Joule", .answer[1]="Watt", .answer[2]="Newton", .answer[3]="Volt", .correct_answer=0, .hint="It is named after the English physicist James Prescott Joule."},
    {.question="What is the measure of an object's resistance to changes in motion called?", .answer[0]="Force", .answer[1]="Velocity", .answer[2]="Acceleration", .answer[3]="Inertia", .correct_answer=3, .hint="Newton's First Law of Motion describes it."},
    {.question="What is the process of a solid turning into a liquid called?", .answer[0]="Condensation", .answer[1]="Evaporation", .answer[2]="Sublimation", .answer[3]="Melting", .correct_answer=3, .hint="It occurs when heat is added."},
    {.question="What is the force that acts on a body moving in a circular path?", .answer[0]="Centrifugal force", .answer[1]="Centripetal force", .answer[2]="Frictional force", .answer[3]="Gravitational force", .correct_answer=1, .hint="It points towards the center of the circle."},
    {.question="What is the study of the Earth's physical structure and substance called?", .answer[0]="Biology", .answer[1]="Chemistry", .answer[2]="Physics", .answer[3]="Geology", .correct_answer=3, .hint="It includes the study of rocks, minerals, and landforms."},
    {.question="What is the force that opposes the motion of two objects in contact with each other?", .answer[0]="Gravity", .answer[1]="Magnetism", .answer[2]="Drag", .answer[3]="Friction", .correct_answer=3, .hint="It can be classified as static or kinetic."},
    {.question="What is the study of the universe and celestial objects called?", .answer[0]="Biology", .answer[1]="Chemistry", .answer[2]="Physics", .answer[3]="Astronomy", .correct_answer=3, .hint="It includes the study of stars, planets, galaxies, and space."},
    {.question="What is the force that causes an object to float in a fluid?", .answer[0]="Gravity", .answer[1]="Magnetism", .answer[2]="Buoyancy", .answer[3]="Friction", .correct_answer=2, .hint="It is related to the displacement of the fluid."},
    {.question="What is the process of a gas turning into a liquid called?", .answer[0]="Evaporation", .answer[1]="Condensation", .answer[2]="Sublimation", .answer[3]="Melting", .correct_answer=1, .hint="It occurs when heat is removed."},
    {.question="What is the branch of science that deals with the study of heredity and variation?", .answer[0]="Biology", .answer[1]="Chemistry", .answer[2]="Physics", .answer[3]="Genetics", .correct_answer=3, .hint="It explores the inheritance of traits."},
    {.question="What is the force that attracts objects towards each other?", .answer[0]="Gravity", .answer[1]="Electromagnetic force", .answer[2]="Magnetism", .answer[3]="Friction", .correct_answer=0, .hint="It is described by Newton's Law of Universal Gravitation."},
};


ques_t history[20]={
    {.question="Who was the first caliph of Islam?", .answer[0]="Abu Bakr", .answer[1]="Umar ibn al-Khattab", .answer[2]="Uthman ibn Affan", .answer[3]="Ali ibn Abi Talib", .correct_answer=1, .hint="He was a close companion of Prophet Muhammad (peace be upon him)."},
    {.question="In which year did the Battle of Badr take place?", .answer[0]="622 CE", .answer[1]="624 CE", .answer[2]="627 CE", .answer[3]="630 CE", .correct_answer=2, .hint="It was a significant battle between the Muslims of Medina and the Quraysh of Mecca."},
    {.question="Who was the last Umayyad caliph?", .answer[0]="Muawiyah II", .answer[1]="Yazid III", .answer[2]="Marwan II", .answer[3]="Abd al-Rahman III", .correct_answer=3, .hint="He ruled from 744 to 750 CE."},
    {.question="Which Muslim scholar is known as the 'Father of Islamic Jurisprudence'?", .answer[0]="Imam Abu Hanifa", .answer[1]="Imam Malik", .answer[2]="Imam Shafi'i", .answer[3]="Imam Ahmad ibn Hanbal", .correct_answer=1, .hint="He founded the Hanafi school of thought."},
    {.question="Who was the first caliph of Islam?", .answer[0]="Abu Bakr", .answer[1]="Umar ibn al-Khattab", .answer[2]="Uthman ibn Affan", .answer[3]="Ali ibn Abi Talib", .correct_answer=1, .hint="He was a close companion of Prophet Muhammad (peace be upon him)."},
    {.question="In which year did the Battle of Badr take place?", .answer[0]="622 CE", .answer[1]="624 CE", .answer[2]="627 CE", .answer[3]="630 CE", .correct_answer=2, .hint="It was a significant battle between the Muslims of Medina and the Quraysh of Mecca."},
    {.question="Who was the last Umayyad caliph?", .answer[0]="Muawiyah II", .answer[1]="Yazid III", .answer[2]="Marwan II", .answer[3]="Abd al-Rahman III", .correct_answer=3, .hint="He ruled from 744 to 750 CE."},
    {.question="Which Muslim scholar is known as the 'Father of Islamic Jurisprudence'?", .answer[0]="Imam Abu Hanifa", .answer[1]="Imam Malik", .answer[2]="Imam Shafi'i", .answer[3]="Imam Ahmad ibn Hanbal", .correct_answer=1, .hint="He founded the Hanafi school of thought."},
    {.question="Who was the first Muslim woman to lead an army in the history of Islam?", .answer[0]="Aisha bint Abi Bakr", .answer[1]="Umm Salamah", .answer[2]="Fatimah bint Muhammad", .answer[3]="Zainab bint Ali", .correct_answer=1, .hint="She played a significant role in the Battle of Jamal."},
    {.question="Which caliph is known for compiling the Quran into a single written manuscript?", .answer[0]="Abu Bakr", .answer[1]="Umar ibn al-Khattab", .answer[2]="Uthman ibn Affan", .answer[3]="Ali ibn Abi Talib", .correct_answer=3, .hint="This compilation was done to preserve the authenticity of the Quranic text."},
    {.question="Who was the first Muslim explorer to reach the coast of China?", .answer[0]="Ibn Battuta", .answer[1]="Ibn Jubayr", .answer[2]="Zheng He", .answer[3]="Ibn Fadlan", .correct_answer=3, .hint="He led several naval expeditions during the 15th century."},
    {.question="Who was the first caliph of Islam?", .answer[0]="Abu Bakr", .answer[1]="Umar ibn al-Khattab", .answer[2]="Uthman ibn Affan", .answer[3]="Ali ibn Abi Talib", .correct_answer=1, .hint="He was a close companion of Prophet Muhammad (peace be upon him)."},
    {.question="In which year did the Battle of Badr take place?", .answer[0]="622 CE", .answer[1]="624 CE", .answer[2]="627 CE", .answer[3]="630 CE", .correct_answer=2, .hint="It was a significant battle between the Muslims of Medina and the Quraysh of Mecca."},
    {.question="Who was the last Umayyad caliph?", .answer[0]="Muawiyah II", .answer[1]="Yazid III", .answer[2]="Marwan II", .answer[3]="Abd al-Rahman III", .correct_answer=3, .hint="He ruled from 744 to 750 CE."},
    {.question="Which Muslim scholar is known as the 'Father of Islamic Jurisprudence'?", .answer[0]="Imam Abu Hanifa", .answer[1]="Imam Malik", .answer[2]="Imam Shafi'i", .answer[3]="Imam Ahmad ibn Hanbal", .correct_answer=1, .hint="He founded the Hanafi school of thought."},
    {.question="Who was the first Muslim woman to lead an army in the history of Islam?", .answer[0]="Aisha bint Abi Bakr", .answer[1]="Umm Salamah", .answer[2]="Fatimah bint Muhammad", .answer[3]="Zainab bint Ali", .correct_answer=1, .hint="She played a significant role in the Battle of Jamal."},
    {.question="Which caliph is known for compiling the Quran into a single written manuscript?", .answer[0]="Abu Bakr", .answer[1]="Umar ibn al-Khattab", .answer[2]="Uthman ibn Affan", .answer[3]="Ali ibn Abi Talib", .correct_answer=3, .hint="This compilation was done to preserve the authenticity of the Quranic text."},
    {.question="Who was the first Muslim explorer to reach the coast of China?", .answer[0]="Ibn Battuta", .answer[1]="Ibn Jubayr", .answer[2]="Zheng He", .answer[3]="Ibn Fadlan", .correct_answer=3, .hint="He led several naval expeditions during the 15th century."},
    {.question="Which battle marked the end of the Rashidun Caliphate and the beginning of the Umayyad Caliphate?", .answer[0]="Battle of Siffin", .answer[1]="Battle of Yarmouk", .answer[2]="Battle of Karbala", .answer[3]="Battle of Nahrawan", .correct_answer=1, .hint="It took place in 657 CE."},
    {.question="Who was the first female scholar of Hadith in Islamic history?", .answer[0]="Aisha bint Abi Bakr", .answer[1]="Umm Salamah", .answer[2]="Fatimah bint Muhammad", .answer[3]="Rabia al-Adawiyya", .correct_answer=1, .hint="She is known for her extensive knowledge and narrations of Hadith."},
};




ques_t general_knowledge[20]={
    {.question="What is the capital city of France?", .answer[0]="London", .answer[1]="Berlin", .answer[2]="Paris", .answer[3]="Rome", .correct_answer=2, .hint="It is known as the 'City of Light'."},
    {.question="Who wrote 'Romeo and Juliet'?", .answer[0]="William Shakespeare", .answer[1]="Jane Austen", .answer[2]="Charles Dickens", .answer[3]="Mark Twain", .correct_answer=0, .hint="He is considered one of the greatest playwrights of all time."},
    {.question="What is the chemical symbol for water?", .answer[0]="Wa", .answer[1]="Wo", .answer[2]="H2O", .answer[3]="Hy", .correct_answer=2, .hint="It consists of two hydrogen atoms and one oxygen atom."},
    {.question="Which planet is known as the 'Red Planet'?", .answer[0]="Venus", .answer[1]="Mars", .answer[2]="Jupiter", .answer[3]="Saturn", .correct_answer=1, .hint="It is the fourth planet from the Sun."},
    {.question="Who painted the Mona Lisa?", .answer[0]="Vincent van Gogh", .answer[1]="Leonardo da Vinci", .answer[2]="Pablo Picasso", .answer[3]="Claude Monet", .correct_answer=1, .hint="He was an Italian Renaissance artist."},
    {.question="What is the tallest mountain in the world?", .answer[0]="Mount Kilimanjaro", .answer[1]="Mount Everest", .answer[2]="Mount McKinley", .answer[3]="Mount Fuji", .correct_answer=1, .hint="It is located in the Himalayas."},
    {.question="Who is known as the 'Father of Modern Physics'?", .answer[0]="Albert Einstein", .answer[1]="Isaac Newton", .answer[2]="Galileo Galilei", .answer[3]="Niels Bohr", .correct_answer=0, .hint="He developed the theory of relativity."},
    {.question="What is the largest mammal in the world?", .answer[0]="African Elephant", .answer[1]="Blue Whale", .answer[2]="Giraffe", .answer[3]="Hippopotamus", .correct_answer=1, .hint="It is a marine mammal."},
    {.question="In which year did the Titanic sink?", .answer[0]="1912", .answer[1]="1905", .answer[2]="1921", .answer[3]="1915", .correct_answer=0, .hint="It struck an iceberg in the North Atlantic Ocean."},
    {.question="What is the chemical symbol for gold?", .answer[0]="Ag", .answer[1]="Au", .answer[2]="Gd", .answer[3]="Ag", .correct_answer=1, .hint="It has been used for currency and jewelry for centuries."},
    {.question="Who wrote 'To Kill a Mockingbird'?", .answer[0]="Harper Lee", .answer[1]="J.K. Rowling", .answer[2]="Ernest Hemingway", .answer[3]="F. Scott Fitzgerald", .correct_answer=0, .hint="The novel deals with issues of racial injustice and moral growth."},
    {.question="What is the capital city of Japan?", .answer[0]="Seoul", .answer[1]="Tokyo", .answer[2]="Beijing", .answer[3]="Bangkok", .correct_answer=1, .hint="It is the largest city in Japan."},
    {.question="Who is the author of 'The Great Gatsby'?", .answer[0]="F. Scott Fitzgerald", .answer[1]="Ernest Hemingway", .answer[2]="Mark Twain", .answer[3]="William Faulkner", .correct_answer=0, .hint="The novel is set in the Jazz Age."},
    {.question="What is the chemical symbol for oxygen?", .answer[0]="O", .answer[1]="Ox", .answer[2]="Om", .answer[3]="Xy", .correct_answer=0, .hint="It is a vital element for life on Earth."},
    {.question="Who painted 'Starry Night'?", .answer[0]="Vincent van Gogh", .answer[1]="Pablo Picasso", .answer[2]="Claude Monet", .answer[3]="Leonardo da Vinci", .correct_answer=0, .hint="The painting depicts the view from his asylum room window."},
    {.question="What is the smallest bone in the human body?", .answer[0]="Femur", .answer[1]="Patella", .answer[2]="Stapes", .answer[3]="Tibia", .correct_answer=2, .hint="It is located in the middle ear."},
    {.question="Who was the first woman to win a Nobel Prize?", .answer[0]="Marie Curie", .answer[1]="Rosa Parks", .answer[2]="Mother Teresa", .answer[3]="Jane Austen", .correct_answer=0, .hint="She won the Nobel Prize in Physics in 1903."},
    {.question="What is the capital city of Australia?", .answer[0]="Sydney", .answer[1]="Melbourne", .answer[2]="Canberra", .answer[3]="Perth", .correct_answer=2, .hint="It is located in the Australian Capital Territory."},
    {.question="Who wrote '1984'?", .answer[0]="George Orwell", .answer[1]="Aldous Huxley", .answer[2]="Ray Bradbury", .answer[3]="H.G. Wells", .correct_answer=0, .hint="The novel is a dystopian classic."},
    {.question="What is the chemical symbol for iron?", .answer[0]="Fe", .answer[1]="Ir", .answer[2]="In", .answer[3]="I", .correct_answer=0, .hint="It is a common metal used in construction and manufacturing."},
};


void display_instructions()
{
    printf("\t\t\t1 - The Game consists of 5 rounds.\n");
    printf("\t\t\t2 - During Each game you have 3 hints.\n");
    printf("\t\t\t3 - If you use the hint and answer wrong you get minus.\n");
    printf("\t\t\t have fun ^) \n");
}

void display_question(int idx, int category)
{
    switch(category)
    {
        case MATH:
            printf("\t\t %s\n\n", math[idx].question);
        break;
        
        case HISTORY:
            printf("\t\t %s\n\n", history[idx].question);
        break;
        
        case SCIENCE:
            printf("\t\t %s\n\n", science[idx].question);
        break;
        
        case GENERAL:
            printf("\t\t %s\n\n", general_knowledge[idx].question);
        break;

        case SPORT:
            printf("\t\t %s\n\n", sport[idx].question);
        break;
        default:
    }
}

void display_answers(int idx, int category){
    switch(category)
    {
        case MATH:
            printf("\t\t\t1 - %s\n", math[idx].answer[0]);
            printf("\t\t\t2 - %s\n", math[idx].answer[1]);
            printf("\t\t\t3 - %s\n", math[idx].answer[2]);
            printf("\t\t\t4 - %s\n", math[idx].answer[3]);
        break;
        
        case HISTORY:
            printf("\t\t\t1 - %s\n", history[idx].answer[0]);
            printf("\t\t\t2 - %s\n", history[idx].answer[1]);
            printf("\t\t\t3 - %s\n", history[idx].answer[2]);
            printf("\t\t\t4 - %s\n", history[idx].answer[3]);
        break;
        
        case SCIENCE:
            printf("\t\t\t1 - %s\n", science[idx].answer[0]);
            printf("\t\t\t2 - %s\n", science[idx].answer[1]);
            printf("\t\t\t3 - %s\n", science[idx].answer[2]);
            printf("\t\t\t4 - %s\n", science[idx].answer[3]);
        break;
        
        case GENERAL:
            printf("\t\t\t1 - %s\n", general_knowledge[idx].answer[0]);
            printf("\t\t\t2 - %s\n", general_knowledge[idx].answer[1]);
            printf("\t\t\t3 - %s\n", general_knowledge[idx].answer[2]);
            printf("\t\t\t4 - %s\n", general_knowledge[idx].answer[3]);
        break;

        case SPORT:
            printf("\t\t\t1 - %s\n", sport[idx].answer[0]);
            printf("\t\t\t2 - %s\n", sport[idx].answer[1]);
            printf("\t\t\t3 - %s\n", sport[idx].answer[2]);
            printf("\t\t\t4 - %s\n", sport[idx].answer[3]);
        break;
        default:
    }
}

void display_hint(int idx, int category)
{
    switch(category)
    {
        case MATH:
            printf("\t\t %s\n\n", math[idx].hint);
        break;
        
        case HISTORY:
            printf("\t\t %s\n\n", history[idx].hint);
        break;
        
        case SCIENCE:
            printf("\t\t %s\n\n", science[idx].hint);
        break;
        
        case GENERAL:
            printf("\t\t %s\n\n", general_knowledge[idx].hint);
        break;

        case SPORT:
            printf("\t\t %s\n\n", sport[idx].hint);
        break;
        default:
    }
}

check_t check(int idx, int category, int ans)
{
    check_t ret=NOT_RIGHT;
    if(ans < ZERO || ans > MAX_CHOICES) 
    {
        ret = NOT_RIGHT;
    }
    else {
            switch(category)
            {
            case MATH:
                if(ans == math[idx].correct_answer)
                {
                    ret = RIGHT;
                }
            break;
            
            case HISTORY:
                if(ans == history[idx].correct_answer)
                {
                    ret = RIGHT;
                }
            break;
            
            case SCIENCE:
                if(ans == science[idx].correct_answer)
                {
                    ret = RIGHT;
                }
            break;
            
            case GENERAL:
                if(ans == general_knowledge[idx].correct_answer)
                {
                    ret = RIGHT;
                }
            break;

            case SPORT:
                if(ans == sport[idx].correct_answer)
                {
                    ret = RIGHT;
                }
            break;
            default:
            }
    }
    return ret;
}

check_t category_check(int category)
{
    check_t ret=NOT_RIGHT;
    if(category <= ZERO || category > MAX_CATEGORY)
    {
        ret=NOT_RIGHT;
    }
    else 
    {
        ret=RIGHT;
    }
    return ret;
}


int gen_number()
{
    return rand()%20 ;
}