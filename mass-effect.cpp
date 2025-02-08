#include <iostream>
#include <fstream>
#include <string>

int main() {
    // Welcome Message
    std::ifstream file("ascii-art/title-card.txt"); 
    std::string line;

    while (std::getline(file, line)) {
        std::cout << line << std::endl;
    }

    file.close();

    std::cout << "Welcome to the Mass Effect Text Adventure.\n";
    std::cout << "Please enter 'p' to play, or 'q' to quit (lowercase).\n";

    std::string user_input;
    std::cin >> user_input;

    // User quitting condition
    while (user_input != "q" && user_input != "p") {

        std::cout << "\nNot a valid choice.\n"
        "Please enter:\n"
        "'p'\n"
        "or 'q'\n";
        
        std::cin >> user_input;

    }
    if (user_input == "q") {
        std::ifstream file("ascii-art/farewell.txt"); 
        std::string line;

        while (std::getline(file, line)) {
            std::cout << line << std::endl;
        }

        file.close();

        return 0;
    }
    else if (user_input == "p") {
        ;
    }

    // Chapter 0 
    std::cout << "\n[CHAPTER 0: MASS EFFECT]\n"
    "\nIn the year 2148, explorers on Mars discovered the remains of an ancient spacefaring civilization. In the \n" 
    "decades that followed, these mysterious artifacts revealed startling new technologies, enabling travel \n" 
    "to the furthest stars. The basis for this incredible technology was a force that \n" 
    "controlled the very fabric of space and time.\n"
    "\n"
    "They called it the greatest discovery in human history.\n"
    "\n"
    "The civilizations of the galaxy call it... MASS EFFECT.\n\n";

    // User quitting condition
    std::cout << "Enter 'p' to continue, or 'q' to quit.\n";
    std::cin >> user_input;

    
    while (user_input != "q" && user_input != "p") {

        std::cout << "\nNot a valid choice.\n"
        "Please enter:\n"
        "'p'\n"
        "or 'q'\n";
        
        std::cin >> user_input;

    }
    if (user_input == "q") {
        std::ifstream file("ascii-art/farewell.txt"); 
        std::string line;

        while (std::getline(file, line)) {
            std::cout << line << std::endl;
        }

        file.close();

        return 0;
    }
    else if (user_input == "p") {
        ;
    }

    // Chapter 1
    // Choice 1: Recruit Garrus
    std::cout << "\n[CHAPTER 1: THE CITADEL]\n"
    "\nAs commander of the Normandy, you find yourself in need of a crew. But who knows which of these aliens \n" 
    "on the citadel can be trusted? It will be up to you to decide who to bring on your journey. \n" 
    "\n"
    "Your first potential crew member is GARRUS VAKARIAN.\n"
    "\nGarrus is a C-Sec officer who clearly takes no bribes. He's ready to do what needs to get done. \n"
    "In fact, he's just about done with all the red tape you have to wade through to bring criminals to justice. \n"
    "Some describe him as a hothead hell-bent on changing the world. Others' reports claim he is a good officer, \n"
    "albeit an impatient, stubborn one.\n"
    "\n"
    "[MAKE A DECISION]\n"
    "1] Recruit Garrus\n"
    "2] Ignore Garrus\n";

    std::string user_choice_1;
    std::cin >> user_choice_1;

    while (user_choice_1 != "q" && user_choice_1 != "1" && user_choice_1 != "2") {

        std::cout << "\nNot a valid choice.\n"
        "Please enter:\n"
        "'1'\n"
        "'2'\n"
        "or 'q'\n";
        
        std::cin >> user_choice_1;
    }

    if (user_choice_1 == "q") {
        while (std::getline(file, line)) {
            std::cout << line << std::endl;
        }

        file.close();
        return 0;
    }
    else if (user_choice_1 == "1") {
        std::cout << "\n"
        "You have successfully recruited Garrus to the ship!\n"
        "He decides to stay below deck most of the time, and doesn't bother anyone.\n"
        "He's ready for the mission.\n"
        "\n"
        "====== SQUAD ROSTER ======\n"
        "Ashley Williams\n"
        "Kaidan Alenko\n"
        "Garrus Vakarian\n\n"
        "==========================\n"
        "---------------------------\n\n";
    }
    else {
        std::cout << "\n"
        "You chose to pass over Garrus for your mission.\n"
        "\n"
        "====== SQUAD ROSTER ======\n"
        "Ashley Williams\n"
        "Kaidan Alenko\n\n"
        "==========================\n"
        "---------------------------\n\n";
    }

    // User quitting condition
    std::cout << "Enter 'p' to continue, or 'q' to quit.\n";
    std::cin >> user_input;

    
    while (user_input != "q" && user_input != "p") {

        std::cout << "\nNot a valid choice.\n"
        "Please enter:\n"
        "'p'\n"
        "or 'q'\n";
        
        std::cin >> user_input;

    }
    if (user_input == "q") {
        std::ifstream file("ascii-art/farewell.txt"); 
        std::string line;

        while (std::getline(file, line)) {
            std::cout << line << std::endl;
        }

        file.close();

        return 0;
    }
    else if (user_input == "p") {
        ;
    }


    // Choice 2: Recruit Wrex
    std::cout << "\n\n---------------------------\n\n"
    "Next is the unlikely, unwieldy, and completely unstopable URDNOT WREX.\n"
    "\nWrex  is a Krogan bounty hunter working for a crime lord on the Citadel. Doesn't seem to interested in much besides payday. \n"
    "His race was genetically sterilized by the Salarians, leading to devastating effects for his people. Kind of explains the attitude problem. \n"
    "Despire a rough exterior, there seems to be some kind of code that guides him. Hopefully. \n"
    "\n"
    "[MAKE A DECISION]\n"
    "1] Recruit Wrex\n"
    "2] Ignore Wrex\n";

    std::string user_choice_2;
    std::cin >> user_choice_2;

    while (user_choice_2 != "q" && user_choice_2 != "1" && user_choice_2 != "2") {

        std::cout << "\nNot a valid choice.\n"
        "Please enter:\n"
        "'1'\n"
        "'2'\n"
        "or 'q'\n";
        
        std::cin >> user_choice_2;
    }

    if (user_choice_2 == "q") {
        while (std::getline(file, line)) {
            std::cout << line << std::endl;
        }

        file.close();
        return 0;
    }
    else if (user_choice_2 == "1") {
        if (user_choice_1 == "1") { 
            std::cout << "\n"
            "You have successfully recruited Wrex to the ship!\n"
            "He hangs out in the cargo bay, always willing to talk about getting a cure for his people.\n"
            "And I do mean always.\n"
            "\n"
            "====== SQUAD ROSTER ======\n"
            "Ashley Williams\n"
            "Kaidan Alenko\n"
            "Garrus Vakarian\n"
            "Urdnot Wrex\n"
            "==========================\n"
            "---------------------------\n\n";;
        }
        else if (user_choice_1 == "2") {
            std::cout << "\n"
            "You have successfully recruited Wrex to the ship!\n"
            "He hangs out in the cargo bay, always willing to talk about getting a cure for his people.\n"
            "And I do mean always.\n"
            "\n"
            "====== SQUAD ROSTER ======\n"
            "Ashley Williams\n"
            "Kaidan Alenko\n"
            "Urdnot Wrex\n"
            "==========================\n"
            "---------------------------\n\n";;
        }        
    }
    else {
        if (user_choice_1 == "1") {
            std::cout << "\n"
            "You leave Wrex. He's too dangerous.\n"
            "\n"
            "====== SQUAD ROSTER ======\n"
            "Ashley Williams\n"
            "Kaidan Alenko\n"
            "Tali'Zorah nar Rayya\n"
            "Garrus Vakarian\n"
            "==========================\n"
            "---------------------------\n\n";;
        }
        else if (user_choice_1 == "2") {
            std::cout << "\n"
            "You leave Wrex. He's too dangerous.\n"
            "\n"
            "====== SQUAD ROSTER ======\n"
            "Ashley Williams\n"
            "Kaidan Alenko\n"
            "Tali'Zorah nar Rayya\n"
            "==========================\n"
            "---------------------------\n\n";;
        }     
    }

    // User quitting condition
    std::cout << "Enter 'p' to continue, or 'q' to quit.\n";
    std::cin >> user_input;

    
    while (user_input != "q" && user_input != "p") {

        std::cout << "\nNot a valid choice.\n"
        "Please enter:\n"
        "'p'\n"
        "or 'q'\n";
        
        std::cin >> user_input;

    }
    if (user_input == "q") {
        std::ifstream file("ascii-art/farewell.txt"); 
        std::string line;

        while (std::getline(file, line)) {
            std::cout << line << std::endl;
        }

        file.close();

        return 0;
    }
    else if (user_input == "p") {
        ;
    }

    // Choice 3: Recruit Tali
    std::cout << "\n\n---------------------------\n\n"
    "Finally, TALI'ZORAH NAR RAYYA.\n"
    "\nTali is a Quarian nomad looking to accomplish something worthy of her Fleet's honor. It must be some task of Quarian significance. \n"
    "She is evidently a technical genious. However, she is also a known pick-pocket and thief. Can you really trust someone like that? \n"
    "I suppose that depends on whether she considers you an ally or an enemy. \n"
    "\n"
    "[MAKE A DECISION]\n"
    "1] Recruit Tali\n"
    "2] Ignore Tali\n";

    std::string user_choice_3;
    std::cin >> user_choice_3;

    while (user_choice_3 != "q" && user_choice_3 != "1" && user_choice_3 != "2") {

        std::cout << "\nNot a valid choice.\n"
        "Please enter:\n"
        "'1'\n"
        "'2'\n"
        "or 'q'\n";
        
        std::cin >> user_choice_3;
    }

    if (user_choice_3 == "q") {
        while (std::getline(file, line)) {
            std::cout << line << std::endl;
        }

        file.close();
        return 0;
    }
    else if (user_choice_3 == "1") {
        if (user_choice_2 == "1") { 
            if (user_choice_1 == "1") {
                std::cout << "\n"
                "You have successfully recruited Tali to the ship!\n"
                "She's (unsurprisingly) marvelling at the mass effect core which powers the Normandy.\n"
                "I'm sure she will be a fine addition to the team.\n"
                "\n"
                "====== SQUAD ROSTER ======\n"
                "Ashley Williams\n"
                "Kaidan Alenko\n"
                "Garrus Vakarian\n"
                "Urdnot Wrex\n"
                "Tali'Zorah nar Rayya\n"
                "==========================\n"
                "---------------------------\n\n";;
            }
            else if (user_choice_1 == "2") {
                std::cout << "\n"
                "You have successfully recruited Tali to the ship!\n"
                "She's (unsurprisingly) marvelling at the mass effect core which powers the Normandy.\n"
                "I'm sure she will be a fine addition to the team.\n"
                "\n"
                "====== SQUAD ROSTER ======\n"
                "Ashley Williams\n"
                "Kaidan Alenko\n"
                "Urdnot Wrex\n"
                "Tali'Zorah nar Rayya\n"
                "==========================\n"
                "---------------------------\n\n";;
            }
        }
        else if (user_choice_2 == "2") {
            if (user_choice_1 == "1") {
                std::cout << "\n"
                "You have successfully recruited Tali to the ship!\n"
                "She's (unsurprisingly) marvelling at the mass effect core which powers the Normandy.\n"
                "I'm sure she will be a fine addition to the team.\n"
                "\n"
                "====== SQUAD ROSTER ======\n"
                "Ashley Williams\n"
                "Kaidan Alenko\n"
                "Garrus Vakarian\n"
                "Tali'Zorah nar Rayya\n"
                "==========================\n"
                "---------------------------\n\n";;
            }
            else if (user_choice_1 == "2") {
                std::cout << "\n"
                "You have successfully recruited Tali to the ship!\n"
                "She's (unsurprisingly) marvelling at the mass effect core which powers the Normandy.\n"
                "I'm sure she will be a fine addition to the team.\n"
                "\n"
                "====== SQUAD ROSTER ======\n"
                "Ashley Williams\n"
                "Kaidan Alenko\n"
                "Tali'Zorah nar Rayya\n"
                "==========================\n"
                "---------------------------\n\n";;
            }
        }
        
    }
    else if (user_choice_3 == "2") {
        if (user_choice_2 == "1") { 
            if (user_choice_1 == "1") {
                std::cout << "\n"
                "You have successfully recruited Tali to the ship!\n"
                "She's (unsurprisingly) marvelling at the mass effect core which powers the Normandy.\n"
                "I'm sure she will be a fine addition to the team.\n"
                "\n"
                "====== SQUAD ROSTER ======\n"
                "Ashley Williams\n"
                "Kaidan Alenko\n"
                "Garrus Vakarian\n"
                "Urdnot Wrex\n"
                "==========================\n"
                "---------------------------\n\n";;
            }
            else if (user_choice_1 == "2") {
                std::cout << "\n"
                "You have successfully recruited Tali to the ship!\n"
                "She's (unsurprisingly) marvelling at the mass effect core which powers the Normandy.\n"
                "I'm sure she will be a fine addition to the team.\n"
                "\n"
                "====== SQUAD ROSTER ======\n"
                "Ashley Williams\n"
                "Kaidan Alenko\n"
                "Urdnot Wrex\n"
                "==========================\n"
                "---------------------------\n\n";;
            }
        }
        else if (user_choice_2 == "2") {
            if (user_choice_1 == "1") {
                std::cout << "\n"
                "You have successfully recruited Tali to the ship!\n"
                "She's (unsurprisingly) marvelling at the mass effect core which powers the Normandy.\n"
                "I'm sure she will be a fine addition to the team.\n"
                "\n"
                "====== SQUAD ROSTER ======\n"
                "Ashley Williams\n"
                "Kaidan Alenko\n"
                "Garrus Vakarian\n"
                "==========================\n"
                "---------------------------\n\n";;
            }
            else if (user_choice_1 == "2") {
                std::cout << "\n"
                "You have successfully recruited Tali to the ship!\n"
                "She's (unsurprisingly) marvelling at the mass effect core which powers the Normandy.\n"
                "I'm sure she will be a fine addition to the team.\n"
                "\n"
                "====== SQUAD ROSTER ======\n"
                "Ashley Williams\n"
                "Kaidan Alenko\n"
                "==========================\n\n"
                "---------------------------\n\n";
            }
        }
        
    }

    // End chapter results
    std::cout << "---------------------------\n\n"
    "[CHAPTER 1 OUTCOME]\n\n";
    // Case 1: None recruited
    if (user_choice_1 == "2" && user_choice_2 == "2" && user_choice_3 == "2") {
        std::cout << "Flanked by Kaidan and Ashley, you face the daunting task of stopping Saren without the aid of Garrus, Wrex, or Tali.\n"
        "The absence of Garrus's tactical expertise, Wrex's raw power, and Tali's technical prowess is keenly felt as you navigate the\n"
        "treacherous political landscape of the Citadel and the deadly missions ahead. With fewer squadmates, each encounter becomes\n" 
        "a grueling test of skill and resilience, pushing you and the squad to your limits.\n\n" 
        "The fate of the galaxy hangs in the balance, resting on the shoulders of this diminished but determined team.\n";
    }
    

    // Case 2: Everyone recruited
    else if (user_choice_1 == "1" && user_choice_2 == "1" && user_choice_3 == "1") {
        std::cout << "With Garrus's marksmanship, Tali's tech skills, and Wrex's ferocity bolstering their ranks, your team becomes\n"
        "an unstoppable force.  The combined expertise allows the squad to swiftly overcome obstacles, from infiltrating heavily guarded\n" 
        "facilities to deciphering complex alien technology.  The camaraderie within the expanded squad strengthens their resolve,\n"
        "forging an unbreakable bond as you face the Reaper threat.  Each member brings unique insights and abilities to the table,\n"
        "making them adaptable and formidable against any challenge Saren throws their way.\n\n"
        "The galaxy's hope rests on the shoulders of this powerful and united team.\n";
    }

    // Case 3: At least one person recruited
    else
    {
        std::cout << "Accompanied by your crew, you face a unique challenge. The added expertise of your alien squadmate proves invaluable,\n" 
        "but the absence of the other specialists creates noticeable gaps in the squad's capabilities.  You must rely heavily on Kaiden and\n"
        "Ashley to compensate, forcing you to adapt your strategies and prioritize missions that align with the team's strengths.\n"  
        "While the smaller squad fosters a closer bond, the limited skillsets make certain encounters significantly more difficult,\n"
        "demanding creative solutions and a greater reliance on your own abilities.\n\n" 
        "The fate of the galaxy rests on your ability to overcome these limitations, leveraging your squad's unique combination of skills.\n";
    }
    
}