/*
 * Author: Valerie Lam
 * Program description: C++ program that simulates a local high school’s 
 *      basketball shooting game.
 */

#include <iostream>
#include <cstdlib>
#include <ctime>

/* 
 * Function: prompt_for_money_rack_position
 * Description: Stores the user's input for their money-rack position
 * Returns (int): The user's money-rack position
*/
int prompt_for_money_rack_position() {
    int money_rack_position;
    do {
        std::cout << "Where do you want to put your money ball rack? "
            << "Enter 1-5: ";
        std::cin >> money_rack_position;
        if (money_rack_position >= 1 && money_rack_position <= 5) {
            break;
        }
        else {
            std::cout << "Invalid input, try again." << std::endl;
        }
    } while (true);
    return money_rack_position;
}

/* 
 * Function: success_chance_regular_ball
 * Description: Determines the chance of making or missing a shot (not including
 *              starry ball shots)
 * Parameters: 
 *      bool_shots_made (bool array): array of 25 boolean elements where 0 is 
 *          shot missed and 1 is shot made.
*/
void success_chance_regular_ball(bool bool_shots_made[]) {
    for (int i = 0; i < 25; i++) {
        if (rand() % 2 == 0) {
            bool_shots_made[i] = false;
        }
        else {
            bool_shots_made[i] = true;
        }
    }
}

/*
 * Function: print_regular_ball_results
 * Description: Uses the boolean array of non-starry shots made/missed to
 *      determine character array of non-starry shots made/missed. '_' is for
 *      a missed shot, 'O' is for a made shot, 'M' is for a money shot.
 * Parameters: 
 *      bool_shots_made (bool array): array of 25 boolean elements
 *      char_shots_made (char array): array of 25 char elements
 *      money_rack_position (int): money rack position user inputted
*/
void print_regular_ball_results(bool bool_shots_made[], char char_shots_made[], 
    int money_rack_position) {
    for (int i = 0; i < 25; i++) {
        if (money_rack_position == 1) {
            if (i >=0 && i <= 4) {
                if (bool_shots_made[i] == false) {
                    char_shots_made[i] = '_';
                }
                else {
                    char_shots_made[i] = 'M';
                }
            } 
            if ((i >= 5 && i <= 8) || (i >= 10 && i <= 13) || 
                (i >= 15 && i <= 18) || (i >= 20 && i <= 23)) {
                if (bool_shots_made[i] == false) {
                    char_shots_made[i] = '_';
                }
                else {
                    char_shots_made[i] = 'O';
                }
            }
            if (i == 9 || i == 14 || i == 19 || i == 24) {
                if (bool_shots_made[i] == false) {
                    char_shots_made[i] = '_';
                }
                else {
                    char_shots_made[i] = 'M';
                }
            }
        }
        else if (money_rack_position == 2) {
            if (i >= 5 && i <= 9) {
                if (bool_shots_made[i] == false) {
                    char_shots_made[i] = '_';
                }
                else {
                    char_shots_made[i] = 'M';
                }
            }
            if ((i >= 0 && i <= 3) || (i >= 10 && i <= 13) 
                    || (i >= 15 && i <= 18) || (i >= 20 && i <= 23)) {
                if (bool_shots_made[i] == false) {
                    char_shots_made[i] = '_';
                }
                else {
                    char_shots_made[i] = 'O';
                }
            }
            if (i == 4 || i == 14 || i == 19 || i == 24) {
                if (bool_shots_made[i] == false) {
                    char_shots_made[i] = '_';
                }
                else {
                    char_shots_made[i] = 'M';
                }
            }
        }
        else if (money_rack_position == 3) {
            if (i >= 10 && i <= 14) {
                if (bool_shots_made[i] == false) {
                    char_shots_made[i] = '_';
                }
                else {
                    char_shots_made[i] = 'M';
                }
            }
            if ((i >= 0 && i <= 3) || (i >= 5 && i <= 8) 
                    || (i >= 15 && i <= 18) || (i >= 20 && i <= 23)) {
                if (bool_shots_made[i] == false) {
                    char_shots_made[i] = '_';
                }
                else {
                    char_shots_made[i] = 'O';
                }
            }
            if (i == 4 || i == 9 || i == 19 || i == 24) {
                if (bool_shots_made[i] == false) {
                    char_shots_made[i] = '_';
                }
                else {
                    char_shots_made[i] = 'M';
                }
            }
        }
        else if (money_rack_position == 4) {
            if (i >= 15 && i <= 19) {
                if (bool_shots_made[i] == false) {
                    char_shots_made[i] = '_';
                }
                else {
                    char_shots_made[i] = 'M';
                }
            }
            if ((i >= 0 && i <= 3) || (i >= 5 && i <= 8) 
                    || (i >= 10 && i <= 13) || (i >= 20 && i <= 23)) {
                if (bool_shots_made[i] == false) {
                    char_shots_made[i] = '_';
                }
                else {
                    char_shots_made[i] = 'O';
                }
            }
            if (i == 4 || i == 9 || i == 14 || i == 24) {
                if (bool_shots_made[i] == false) {
                    char_shots_made[i] = '_';
                }
                else {
                    char_shots_made[i] = 'M';
                }
            }
        }
        else if (money_rack_position == 5) {
            if (i >= 20 && i <= 24) {
                if (bool_shots_made[i] == false) {
                    char_shots_made[i] = '_';
                }
                else {
                    char_shots_made[i] = 'M';
                }
            }
            if ((i >= 0 && i <= 3) || (i >= 5 && i <= 8) 
                    || (i >= 10 && i <= 13) || (i >= 15 && i <= 18)) {
                if (bool_shots_made[i] == false) {
                    char_shots_made[i] = '_';
                }
                else {
                    char_shots_made[i] = 'O';
                }
            }
            if (i == 4 || i == 9 || i == 14 || i == 19) {
                if (bool_shots_made[i] == false) {
                    char_shots_made[i] = '_';
                }
                else {
                    char_shots_made[i] = 'M';
                }
            }
        }
    }
}

/* 
 * Function: success_chance_starry_ball
 * Description: Determines making or missing a starry ball shot
 * Parameters:
 *      bool_starry_shots_made (bool array): array of booleans of made or missed
 *          boolean shots
*/
void success_chance_starry_ball(bool bool_starry_shots_made[]) {
    if (rand() % 2 == 0) {
        bool_starry_shots_made[0] = false;
    }
    else {
        bool_starry_shots_made[0] = true;
    }
}             
    
/*
 * Function: print_starry_results
 * Description: Assigns made/missed starry shots with the following notation and
 *      stores it into a character array. '_' means missed shot and 'S' means made 
 *      starry shot.
 * Parameters:
*/
void print_starry_ball_results(bool bool_starry_shots_made[], 
    char char_starry_shots_made[]) {
    if (bool_starry_shots_made[0] == false) {
        char_starry_shots_made[0] = '_';
    }
    else if (bool_starry_shots_made[0] == true) {
        char_starry_shots_made[0] = 'S';
    }
}

/* 
 * Function: regular_rack_total
 * Description: Calculates the total points for each non-starry rack
 * Parameters: 
 *      char_shots_made (char): array of shots made/missed in char format
 *      rack_total_array (int): array of rack total points 
*/
void regular_rack_total(char char_shots_made[], int rack_total_array[]) {
    for (int i = 0; i < 5; i++) {
        int missed_shots_cntr = 0;
        int regular_shots_cntr = 0;
        int money_shots_cntr = 0;
        int rack_total = 0;
        if (i == 0) {
            for (int j = 0; j < 5; j++) {
                if (char_shots_made[j] == '_') {
                    missed_shots_cntr = 0;
                }
                else if (char_shots_made[j] == 'O') {
                    regular_shots_cntr++;
                }
                else if (char_shots_made[j] == 'M') {
                    money_shots_cntr++;
                }
            }
            rack_total_array[i] = regular_shots_cntr + (2 * money_shots_cntr);
        }
        if (i == 1) {
            for (int j = 5; j < 10; j++) {
                if (char_shots_made[j] == '_') {
                    missed_shots_cntr = 0;
                }
                else if (char_shots_made[j] == 'O') {
                    regular_shots_cntr++;
                }
                else if (char_shots_made[j] == 'M') {
                    money_shots_cntr++;
                }
            }
            rack_total_array[i] = regular_shots_cntr + (2 * money_shots_cntr);
        }
        if (i == 2) {
            for (int j = 10; j < 15; j++) {
                if (char_shots_made[j] == '_') {
                    missed_shots_cntr = 0;
                }
                else if (char_shots_made[j] == 'O') {
                    regular_shots_cntr++;
                }
                else if (char_shots_made[j] == 'M') {
                    money_shots_cntr++;
                }
            }
            rack_total_array[i] = regular_shots_cntr + (2 * money_shots_cntr);
        }
        if (i == 3) {
            for (int j = 15; j < 20; j++) {
                if (char_shots_made[j] == '_') {
                    missed_shots_cntr = 0;
                }
                else if (char_shots_made[j] == 'O') {
                    regular_shots_cntr++;
                }
                else if (char_shots_made[j] == 'M') {
                    money_shots_cntr++;
                }
            }
            rack_total_array[i] = regular_shots_cntr + (2 * money_shots_cntr);
        }
        if (i == 4) {
            for (int j = 20; j < 25; j++) {
                if (char_shots_made[j] == '_') {
                    missed_shots_cntr = 0;
                }
                else if (char_shots_made[j] == 'O') {
                    regular_shots_cntr++;
                }
                else if (char_shots_made[j] == 'M') {
                    money_shots_cntr++;
                }
            }
            rack_total_array[i] = regular_shots_cntr + (2 * money_shots_cntr);
        }
    }
}

/*
 * Function: starry_rack_total
 * Description: Calculates the starry rack total
 * Parameters: 
 *      bool_starry_shots_made (bool): array of starry shots made/missed
 *      starry_rack_total_array (int): array of starry rack total points
*/
void starry_rack_total(bool bool_starry_shots_made[], 
    int starry_rack_total_array[]) {
    int starry_shots_cntr = 0;
    int missed_shots_cntr = 0;
    if (bool_starry_shots_made[0] == false) {
        missed_shots_cntr = 0;
    }
    else if (bool_starry_shots_made[0] == true) {
        starry_shots_cntr++;
    }
    starry_rack_total_array[0] = (3 * starry_shots_cntr);
}

/* 
 * Function: calculate_player_total
 * Description: Calculates each player's total points
 * Parameters: 
 *      rack_total_array (int): array of each rack total points
 *      starry_rack_total_array_1 (int): array of starry rack 1 total points
 *      starry_rack_total_array_2 (int): array of starry rack 2 total points
*/
int calculate_player_total(int rack_total_array[], 
    int starry_rack_total_array_1[], int starry_rack_total_array_2[]) {
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += rack_total_array[i];
    }
    sum += (starry_rack_total_array_1[0] + starry_rack_total_array_2[0]);
    return sum;
}

/* 
 * Function: print_player_shooting_results
 * Description: Prints out the shooting results for the player
 * Parameters:
 *      char_shots_made (char): array of non-starry shots made/missed
 *      char_starry_shots_made_1 (char): array of starry shots made/missed for 
 *          rack 1
 *      char_starry_shots_made_2 (char): array of starry shots made/missed for
 *          rack 2
 *      rack_total_array (int): array of rack totals for non-starry racks
 *      starry_rack_total_array_1 (int): array of rack totals for starry rack 1
 *      starry_rack_total_array_2 (int): array of rack totals for starry rack 2
*/
void print_player_shooting_results(char char_shots_made[], 
    char char_starry_shots_made_1[], char char_starry_shots_made_2[],
    int rack_total_array[], int starry_rack_total_array_1[], 
    int starry_rack_total_array_2[]) {
    // Rack 1
    std::cout << "Rack 1:";
    for (int i = 0; i < 5; i++) {
        std::cout << " " << char_shots_made[i] << " ";
    }
    std::cout << "| " << rack_total_array[0] << " pts" << std::endl;

    // Rack 2
    std::cout << "Rack 2:";
    for (int i = 5; i < 10; i++) {
        std::cout << " " << char_shots_made[i] << " ";
    }
    std::cout << "| " << rack_total_array[1] << " pts" << std::endl;

    // Starry Rack 1
    std::cout << "Starry:";
    std::cout << " " << char_starry_shots_made_1[0] << "             " << "| " 
        << starry_rack_total_array_1[0] << " pts" << std::endl;

    // Rack 3
    std::cout << "Rack 3:";
    for (int i = 10; i < 15; i++) {
        std::cout << " " << char_shots_made[i] << " ";
    }
    std::cout << "| " << rack_total_array[2] << " pts" << std::endl;

    // Starry Rack 2
    std::cout << "Starry:";
    std::cout << " " << char_starry_shots_made_2[0] << "             " << "| " 
        << starry_rack_total_array_2[0] << " pts" << std::endl;

    // Rack 4
    std::cout << "Rack 4:";
    for (int i = 15; i < 20; i++) {
        std::cout << " " << char_shots_made[i] << " ";
    }
    std::cout << "| " << rack_total_array[3] << " pts" << std::endl;

    // Rack 5
    std::cout << "Rack 5:";
    for (int i = 20; i < 25; i++) {
        std::cout << " " << char_shots_made[i] << " ";
    }
    std::cout << "| " << rack_total_array[4] << " pts" << std::endl;

    std::cout << std::endl;

    // Total Points
    std::cout << "Total: " << calculate_player_total(rack_total_array, 
        starry_rack_total_array_1, starry_rack_total_array_2) << " pts" 
        << std::endl;
    std::cout << std::endl;
}

/*
 * Function: print_winner
 * Description: prints the winner of the game
 * Parameters: 
 *      player_1_score (int): player 1's score
 *      player_2_score (int): plyaer 2's score
*/
void print_winner(int player_1_score, int player_2_score) {
    if (player_1_score > player_2_score) {
        std::cout << std::endl;
        std::cout << "Player 1 is the winner!" << std::endl;
        std::cout << std::endl;
    }
    else if (player_1_score < player_2_score) {
        std::cout << std::endl;
        std::cout << "Player 2 is the winner!" << std::endl;
        std::cout << std::endl;
    }
    else if (player_1_score == player_2_score) {
        std::cout << std::endl;
        std::cout << "The game is a tie!" << std::endl;
        std::cout << std::endl;
    }
}

/*
 * Function: prompt_for_play_again
 * Description: Prompts users if they wish to play again. 1 is yes and 0 is no.
 *      If they input a value out of range, scolds user.
 * Returns (int): user input on play again prompt
*/
int prompt_for_play_again() {
    int user_input;
    do {
        std::cout << "Do you want to play again? (1-yes, 0-no): ";
        std::cin >> user_input;
        if (user_input == 1 | user_input == 0) {
            break;
        }
        else {
            std::cout << "Invalid input, try again." << std::endl;
        }
    } while (true);
    return user_input;
}

int main() {
	srand(time(nullptr)); // seeds PRNG 
    
    int user_input; // declare user-input value for play again prompt 

    // Do-while loop that repeats if users want to play again
    do {
        user_input = -1; // initialize user-input to value not valid (0 or 1)
        
        int player_1_total_score; // initialize player 1 total score
        int player_2_total_score; // initialize player 2 total score

        // Prints a welcome message to the users
        std::cout << "Welcome to the basketball shooting constest!"
            << std::endl << std::endl;

        // For loop that executes twice for two different players
        for (int i = 0; i < 2; i++) {
            int money_rack_position; // initalize money rack position

            bool bool_shots_made[25]; // array for shots made/missed
            char char_shots_made[25]; // array for shots made/missed in notation
            bool bool_starry_shots_made_1[1]; // array for rack 1 starry shots 
            char char_starry_shots_made_1[1]; // array for rack 1 starry shots
            bool bool_starry_shots_made_2[1]; // array for rack 2 starry shots
            char char_starry_shots_made_2[1]; // array for rack 2 starry shots

            int rack_total_array[5]; // array for each rack total points
            int starry_rack_total_array_1[1]; // array for starry rack 1 points
            int starry_rack_total_array_2[1]; // array for starry rack 2 points

            // If and else if statement to print player 1 or 2 depending on 
            //      which loop is executing.
            if (i == 0) {
                std::cout << "Player 1:" << std::endl;
            }
            else if (i == 1) {
                std::cout << "Player 2:" << std::endl;
            }
            
            // Prompts for money rack
            money_rack_position = prompt_for_money_rack_position();
            // Sets 50% chance for made/missed shots and money ball shots for
            //      non-starry ball racks
            success_chance_regular_ball(bool_shots_made);
            // Converts boolean array of missed/made/money shots to character
            //      notation
            print_regular_ball_results(bool_shots_made, char_shots_made, 
                money_rack_position);
            
            // Sets 50% chance for made/missed shots for starry ball rack 1
            success_chance_starry_ball(bool_starry_shots_made_1);
            // Converts boolean array of missed/made shots to character notation
            print_starry_ball_results(bool_starry_shots_made_1, 
                char_starry_shots_made_1);
            
            // Sets 50% chance for made/missed shots for starry ball rack 2
            success_chance_starry_ball(bool_starry_shots_made_2);
            // Converts boolean array of missed/made shots to character notation
            print_starry_ball_results(bool_starry_shots_made_2, 
                char_starry_shots_made_2);
            
            // Calculates each rack total and stores in rack_total_array
            regular_rack_total(char_shots_made, rack_total_array);
            // Calculates starry rack 1 total
            starry_rack_total(bool_starry_shots_made_1, 
                starry_rack_total_array_1);
            // Calculates starry rack 2 total
            starry_rack_total(bool_starry_shots_made_2, 
                starry_rack_total_array_2);
        
            // Prints player's shooting results
            print_player_shooting_results(char_shots_made, 
                char_starry_shots_made_1, char_starry_shots_made_2, 
                rack_total_array, starry_rack_total_array_1, 
                starry_rack_total_array_2);

            // Prints out either player 1 or 2's score, depending on loop
            //      iteration.
            if (i == 0) {
                player_1_total_score = calculate_player_total(rack_total_array, 
                starry_rack_total_array_1, starry_rack_total_array_2);
            }
            else if (i == 1) {
                player_2_total_score = calculate_player_total(rack_total_array, 
                starry_rack_total_array_1, starry_rack_total_array_2);
            }
        }
    
        // Prints winner of the game
        print_winner(player_1_total_score, player_2_total_score);
        
        // Prompts users for play again
        user_input = prompt_for_play_again();

    } while (user_input == 1);
	
}
