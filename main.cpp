// Author:              Fahad Abuloghod
//
// Institution:         University of Waterloo
//
// Date of release:     January 13, 2022
//
// About:               A program that displays information related to the show RuPaul's Drag Race and related franchises based on user input.
//                      My intention with this program is to practice the topics of Inheritance, Polymorphism, and the switch statement 
//                      to strengthen my skills in those areas and to better understand the ideas behind object-oriented programming.
//                      Any questions can be directed to my email at: fahad.abuloghod@gmail.com
//
// Compilation command: I used the following command in the console on VS Code: g++ -std=c++11 main.cpp base_season.cpp sashay.cpp shantay.cpp disqualified.cpp all_stars.cpp disq_shant.cpp sash_shant.cpp disq_sash_shant.cpp
//
// Notes:          - Drag Race Thailand currently lacks any lipsync finale songs due to the titles of most of the songs containing non-ASCII characters.
//                 - Similarly, some other names had to be changed due to containing non-ASCII characters, such as Shea Couleé and Océane Aqua-Black.
//
// Change log:     - January 13, 2022: v.1.0.0 released.
//                 - September 20, 2022: v.1.0.1 released. Added a missing break statement.
//                 - January 1, 2023: v.1.0.2 released. Reworked include statements to include hpp files only instead of cpp files. A tip I picked up from a TA last term (ECE250: Algorithms and Data Structures, my love). Also added a comment on how to compile if needed.

#include <iostream>
#include <stdexcept>
#include "lvl_two.hpp"
#include "lvl_one.hpp"
#include "base_season.hpp"
#include "disq_sash_shant.hpp"

// Function Declarations
int main ();

Season us_create_base ( unsigned int season );
Shantay_Season us_create_shant ( unsigned int season );
Sashay_Season us_create_sash ( unsigned int season );
Disqualified_Season us_create_disq ( unsigned int season );
Disq_Shant us_disq_shant ( unsigned int season );
Sash_Shant us_sash_shant ( unsigned int season );

Season uk_create_base ( unsigned int season );
Shantay_Season uk_create_shant ( unsigned int season );
Disq_Sash_Shant uk_disq_sash_shant ( unsigned int season );

Season canada_create_base ( unsigned int season );

Season holland_create_base ( unsigned int season );
Shantay_Season holland_create_shant ( unsigned int season );

Season spain_create_base ( unsigned int season );

Sash_Shant thailand_sash_shant ( unsigned int season ); 
Disq_Sash_Shant thailand_disq_sash_shant ( unsigned int season );

Shantay_Season italia_create_shant ( unsigned int season );

Season down_under_create_base ( unsigned int season );

All_Stars allstars_create_season ( unsigned int season );

// Function Definitions
int main () {

    std::cout << "Hey there! Which RuPaul's Drag Race franchise would you like to talk about? Current options include:" << std::endl;
    std::cout << "RuPaul's Drag Race (0)" << std::endl;
    std::cout << "RuPaul's Drag Race UK (1)" << std::endl;
    std::cout << "RuPaul's Drag Race Canada (2)" << std::endl;
    std::cout << "RuPaul's Drag Race Holland (3)" << std::endl;
    std::cout << "RuPaul's Drag Race Espana (4)" << std::endl;
    std::cout << "RuPaul's Drag Race Thailand (5)" << std::endl;
    std::cout << "RuPaul's Drag Race Italia (6)" << std::endl;
    std::cout << "RuPaul's Drag Race Down Under (7)" << std::endl;
    std::cout << "RuPaul's Drag Race All Stars (8)" << std::endl;
    
    unsigned int user_input{ 10 };
    std::cin >> user_input;

    switch ( user_input ) {

        case 0: {

            std::cout << "Which season of RuPaul's Drag Race would you like to talk about?" << std::endl;
            unsigned int season{};
            std::cin >> season;
            
            std::cout << "And what would you like to talk about regarding Season " << season << " of RuPaul's Drag Race? We can talk about:" << std::endl;
            std::cout << "The winner (0)" << std::endl;
            std::cout << "The top 4 (1)" << std::endl;            
            std::cout << "The list of contestants (2)" << std::endl;
            std::cout << "The song(s) played during the finale performances (3)" << std::endl;
            std::cout << "The number of episodes (4)" << std::endl;
            std::cout << "The number of contestants (5)" << std::endl;
            std::cout << "The list of guest judges (6)" << std::endl;
            unsigned int i_intent{ 10 };
            
            if ( ( season == 3 ) || ( season == 4 ) || ( season == 6 ) || 
                 ( season == 10 ) || ( season == 11 ) || ( season == 13 ) ) {

                std::cout << "The two queens that were involved in a double shantay and lived to lipsync another day! (7)" << std::endl;
                std::cin >> i_intent;
                Shantay_Season to_print{us_create_shant( season )};
                to_print.print( i_intent );

            } else if ( season == 8 ) {

                std::cout << "The two queens that were involved in the double sashay... (7)" << std::endl;
                std::cin >> i_intent;
                Sashay_Season to_print{us_create_sash( season )};
                to_print.print( i_intent );

            } else if ( season == 4 ) {

                std::cout << "The queen that was disqualified... (7)";
                std::cin >> i_intent;
                Disqualified_Season to_print{us_create_disq( season )};
                to_print.print( i_intent );

            } else if ( season == 5 ) {

                std::cout << "The two queens that were involved in a double shantay and lived to lipsync another day! (7)" << std::endl;
                std::cout << "The two queens that were involved in the double sashay... (8)" << std::endl;
                std::cin >> i_intent;
                Sash_Shant to_print{us_sash_shant( season )};
                to_print.print( i_intent );

            } else if ( season == 12 ) {
                
                std::cout << "The two queens that were involved in a double shantay and lived to lipsync another day! (7)" << std::endl;
                std::cout << "The queen that was disqualified... (8)";
                std::cin >> i_intent;
                Disq_Shant to_print{us_disq_shant( season )};
                to_print.print( i_intent );

            } else {

                std::cin >> i_intent;
                Season to_print{us_create_base( season )};
                to_print.print( i_intent );

            }

            break;
        }

        case 1: {

            std::cout << "Which season of RuPaul's Drag Race UK would you like to talk about?" << std::endl;
            unsigned int season{};
            std::cin >> season;
            
            std::cout << "And what would you like to talk about regarding Season " << season << " of RuPaul's Drag Race UK? We can talk about:" << std::endl;
            std::cout << "The winner (0)" << std::endl;
            std::cout << "The top 4 (1)" << std::endl;            
            std::cout << "The list of contestants (2)" << std::endl;
            std::cout << "The song(s) played during the finale performances (3)" << std::endl;
            std::cout << "The number of episodes (4)" << std::endl;
            std::cout << "The number of contestants (5)" << std::endl;
            std::cout << "The list of guest judges (6)" << std::endl;
            unsigned int i_intent{ 10 };
            
            if ( ( season == 2 ) ) {

                std::cout << "The two queens that were involved in a double shantay and lived to lipsync another day! (7)" << std::endl;
                std::cin >> i_intent;
                Shantay_Season to_print{uk_create_shant( season )};
                to_print.print( i_intent );

            } else if ( season == 3 ) {

                std::cout << "The two queens that were involved in a double shantay and lived to lipsync another day! (7)" << std::endl;
                std::cout << "The two queens that were involved in the double sashay... (8)" << std::endl;
                std::cout << "The queen that was disqualified... (9)" << std::endl;
                std::cin >> i_intent;
                Disq_Sash_Shant to_print{uk_disq_sash_shant( season )};
                to_print.print( i_intent );

            } else {

                std::cin >> i_intent;
                Season to_print{uk_create_base( season )};
                to_print.print( i_intent );

            }

            break;
        }

        case 2: {

            std::cout << "Which season of RuPaul's Drag Race Canada would you like to talk about?" << std::endl;
            unsigned int season{};
            std::cin >> season;
            
            std::cout << "And what would you like to talk about regarding Season " << season << " of RuPaul's Drag Race Canada? We can talk about:" << std::endl;
            std::cout << "The winner (0)" << std::endl;
            std::cout << "The top 4 (1)" << std::endl;            
            std::cout << "The list of contestants (2)" << std::endl;
            std::cout << "The song(s) played during the finale performances (3)" << std::endl;
            std::cout << "The number of episodes (4)" << std::endl;
            std::cout << "The number of contestants (5)" << std::endl;
            std::cout << "The list of guest judges (6)" << std::endl;
            unsigned int i_intent{ 10 };

            std::cin >> i_intent;
            Season to_print{canada_create_base( season )};
            to_print.print( i_intent );          

            break;
        }

        case 3: {

            std::cout << "Which season of RuPaul's Drag Race Holland would you like to talk about?" << std::endl;
            unsigned int season{};
            std::cin >> season;
            
            std::cout << "And what would you like to talk about regarding Season " << season << "of RuPaul's Drag Race Holland? We can talk about:" << std::endl;
            std::cout << "The winner (0)" << std::endl;
            std::cout << "The top 4 (1)" << std::endl;            
            std::cout << "The list of contestants (2)" << std::endl;
            std::cout << "The song(s) played during the finale performances (3)" << std::endl;
            std::cout << "The number of episodes (4)" << std::endl;
            std::cout << "The number of contestants (5)" << std::endl;
            std::cout << "The list of guest judges (6)" << std::endl;
            unsigned int i_intent{ 10 };
            
            if ( season == 1 ) {

                std::cout << "The two queens that were involved in a double shantay and lived to lipsync another day! (7)" << std::endl;
                std::cin >> i_intent;
                Shantay_Season to_print{holland_create_shant( season )};
                to_print.print( i_intent );

            } else {

                Season to_print{holland_create_base( season )};
                to_print.print( i_intent );             

            }

            break;
        }

        case 4: {

            std::cout << "And what would you like to talk about regarding Season 1 of RuPaul's Drag Race España? We can talk about:" << std::endl;
            std::cout << "The winner (0)" << std::endl;
            std::cout << "The top 4 (1)" << std::endl;            
            std::cout << "The list of contestants (2)" << std::endl;
            std::cout << "The song(s) played during the finale performances (3)" << std::endl;
            std::cout << "The number of episodes (4)" << std::endl;
            std::cout << "The number of contestants (5)" << std::endl;
            std::cout << "The list of guest judges (6)" << std::endl;
            unsigned int i_intent{ 10 };

            std::cin >> i_intent;
            Season to_print{spain_create_base( 1 )};
            to_print.print( i_intent );

            break;
        }

        case 5: {

            std::cout << "Which season of RuPaul's Drag Race Thailand would you like to talk about?" << std::endl;
            unsigned int season{};
            std::cin >> season;
            
            std::cout << "And what would you like to talk about regarding Season " << season << "of RuPaul's Drag Race? We can talk about:" << std::endl;
            std::cout << "The winner (0)" << std::endl;
            std::cout << "The top 4 (1)" << std::endl;            
            std::cout << "The list of contestants (2)" << std::endl;
            std::cout << "The song(s) played during the finale performances (3)" << std::endl;
            std::cout << "The number of episodes (4)" << std::endl;
            std::cout << "The number of contestants (5)" << std::endl;
            std::cout << "The list of guest judges (6)" << std::endl;
            std::cout << "The two queens that were involved in a double shantay and lived to lipsync another day! (7)" << std::endl;
            std::cout << "The two queens that were involved in a double sashay... (8)" << std::endl;
            unsigned int i_intent{ 10 };
            
            if ( season == 1 ) {

                std::cin >> i_intent;
                Sash_Shant to_print{thailand_sash_shant( season )};
                to_print.print( i_intent );

            } else {

                std::cout << "The queen that was disqualified... (9)" << std::endl;
                std::cin >> i_intent;
                Disq_Sash_Shant to_print{thailand_disq_sash_shant( season )};
                to_print.print( i_intent );

            }

            break;
        }

        case 6: {
            
            std::cout << "And what would you like to talk about regarding Season 1 of RuPaul's Drag Race Italia? We can talk about:" << std::endl;
            std::cout << "The winner (0)" << std::endl;
            std::cout << "The top 4 (1)" << std::endl;            
            std::cout << "The list of contestants (2)" << std::endl;
            std::cout << "The song(s) played during the finale performances (3)" << std::endl;
            std::cout << "The number of episodes (4)" << std::endl;
            std::cout << "The number of contestants (5)" << std::endl;
            std::cout << "The list of guest judges (6)" << std::endl;
            unsigned int i_intent{ 10 };

            std::cin >> i_intent;
            Season to_print{italia_create_shant( 1 )};
            to_print.print( i_intent );

            break;

        }

        case 7 : {

            std::cout << "And what would you like to talk about regarding Season 1 of RuPaul's Drag Race Down Under? We can talk about:" << std::endl;
            std::cout << "The winner (0)" << std::endl;
            std::cout << "The top 4 (1)" << std::endl;            
            std::cout << "The list of contestants (2)" << std::endl;
            std::cout << "The song(s) played during the finale performances (3)" << std::endl;
            std::cout << "The number of episodes (4)" << std::endl;
            std::cout << "The number of contestants (5)" << std::endl;
            std::cout << "The list of guest judges (6)" << std::endl;
            unsigned int i_intent{ 10 };

            std::cin >> i_intent;
            Season to_print{down_under_create_base( 1 )};
            to_print.print( i_intent );          

            break;
        }

        case 8: {
            std::cout << "Which season of RuPaul's Drag Race All Stars would you like to talk about?" << std::endl;
            unsigned int season{};
            std::cin >> season;
            
            std::cout << "And what would you like to talk about regarding Season " << season << " of RuPaul's Drag Race All Stars? We can talk about:" << std::endl;
            std::cout << "The winner (0)" << std::endl;
            std::cout << "The top 4 (1)" << std::endl;            
            std::cout << "The list of contestants (2)" << std::endl;
            std::cout << "The song(s) played during the finale performances (3)" << std::endl;
            std::cout << "The number of episodes (4)" << std::endl;
            std::cout << "The number of contestants (5)" << std::endl;
            std::cout << "The list of guest judges (6)" << std::endl;

            if ( (season == 5 ) || ( season == 6 ) ) {
                std::cout << "The list of lipsync assassins that showed up throughout the season! (7)" << std::endl;
            }

            unsigned int i_intent{ 10 };
            std::cin >> i_intent;
            
            All_Stars to_print{allstars_create_season( season )};
            to_print.print( i_intent );

            break;
        }
        
        default: { throw std::invalid_argument("I'm afraid I didn't understand what you said... awkward.. \n"); }
    }   

    return 0;
}

Season us_create_base ( unsigned int season ) { 
    
    Season to_return{};

    switch ( season ) {
    
        case 1 : {
            to_return.set_winner( "BeBe Zahara Benet" );
            
            std::string *p_us_szn_one_top_4{ new std::string[4]{"BeBe Zahara Benet", "Nina Flowers", "Rebecca Glasscock", "Shannel"} };
            to_return.set_top_4( p_us_szn_one_top_4, 4 );

            std::string *p_us_szn_one_contestants{ new std::string[9]{"BeBe Zahara Benet", "Nina Flowers", "Rebecca Glasscock", "Shannel", "Ongina", "Jade", "Akashia", "Tammie Brown", "Victoria \"Porkchop\" Parker"} };
            to_return.set_contestants( p_us_szn_one_contestants, 9 );

            std::string *p_us_szn_one_finale_songs{ new std::string[1]{"\"Cover Girl (Put the Bass in Your Walk)\" by RuPaul"} };
            to_return.set_finale_songs( p_us_szn_one_finale_songs, 1 );

            to_return.set_num_episodes( 9 );
            to_return.set_num_contestants( 9 );

            to_return.set_guest_judges( 12 );
            to_return.set_guest_judge( "Bob Mackie", 0 );
            to_return.set_guest_judge( "Mike Ruiz", 1 );
            to_return.set_guest_judge( "Michelle Williams", 2 );
            to_return.set_guest_judge( "Frank Gatson", 3 );
            to_return.set_guest_judge( "Howard Bragman", 4 );
            to_return.set_guest_judge( "Debra Wilson", 5 );
            to_return.set_guest_judge( "Gordon Espinet", 6 );
            to_return.set_guest_judge( "Jenny Shimizu", 7 );
            to_return.set_guest_judge( "Lucy Lawless", 8 );
            to_return.set_guest_judge( "Robin Antin", 9 );
            to_return.set_guest_judge( "Jeffrey Moran", 10 );
            to_return.set_guest_judge( "María Conchita Alonso", 11 );
            

            break;
        }

        case 2 : {
            to_return.set_winner( "Tyra Sanchez" );
            
            std::string *p_us_szn_two_top_4{ new std::string[4]{"Tyra Sanchez", "Raven", "Jujubee", "Tatianna"} };
            to_return.set_top_4( p_us_szn_two_top_4, 4 );

            std::string *p_us_szn_two_contestants{ new std::string[12]{"Tyra Sanchez", "Raven", "Jujubee", "Tatianna", "Pandora Boxx", "Jessica Wild", "Sahara Davenport", "Morgan McMichaels", "Sonique", "Mystique Summers Madison", "Nicole Paige Brooks", "Shangela Laquifa Wadley"} };
            to_return.set_contestants( p_us_szn_two_contestants, 12 );

            std::string *p_us_szn_two_finale_songs{ new std::string[1]{"\"Jealous Of My Boogie (Gomi & RasJek Edit)\" by RuPaul"} };
            to_return.set_finale_songs( p_us_szn_two_finale_songs, 1 );

            to_return.set_num_episodes( 12 );
            to_return.set_num_contestants( 12 );

            to_return.set_guest_judges( 19 );
            to_return.set_guest_judge( "Kathy Griffin", 0 );
            to_return.set_guest_judge( "Mike Ruiz", 1 );
            to_return.set_guest_judge( "Dita Von Tesse", 2 );
            to_return.set_guest_judge( "Kim Coles", 3 );
            to_return.set_guest_judge( "Kathy Najimy", 4 );
            to_return.set_guest_judge( "Tanya Tucker", 5 );
            to_return.set_guest_judge( "Niecy Nash", 6 );
            to_return.set_guest_judge( "Lisa Rinna", 7 );
            to_return.set_guest_judge( "Mathu Andersen", 8 );
            to_return.set_guest_judge( "Martha Wash", 9 );
            to_return.set_guest_judge( "Terri Nunn", 10 );
            to_return.set_guest_judge( "Henry Rollins", 11 );      
            to_return.set_guest_judge( "Gigi Levangie", 12 );
            to_return.set_guest_judge( "Jackie Collins", 13 );
            to_return.set_guest_judge( "Cloris Leachman", 14 );
            to_return.set_guest_judge( "Debbie Reynolds", 15 );
            to_return.set_guest_judge( "Toni Ko", 16 );
            to_return.set_guest_judge( "Tatum O'Neal", 17 );
            to_return.set_guest_judge( "Marissa Jaret Winokur", 18 );      

            break;
        }

        case 7 : {
            to_return.set_winner( "Violet Chachki" );
            
            std::string *p_us_szn_seven_top_4{ new std::string[4]{"Violet Chachki", "Ginger Minj", "Pearl", "Kennedy Davenport"} };
            to_return.set_top_4( p_us_szn_seven_top_4, 4 );

            std::string *p_us_szn_seven_contestants{ new std::string[14]{"Violet Chachki", "Ginger Minj", "Pearl", "Kennedy Davenport", "Katya", "Trixie Mattel", "Miss Fame", "Jaidynn Diore Fierce", "Max", "Kandy Ho", "Mrs. Kasha Davis", "Jasmine Masters", "Sasha Belle", "Tempest DuJour"} };
            to_return.set_contestants( p_us_szn_seven_contestants, 14 );

            std::string *p_us_szn_seven_finale_songs{ new std::string[3]{"Pray and Slay", "Sleep Walker", "Too Many Daddies"} };
            to_return.set_finale_songs( p_us_szn_seven_finale_songs, 3 );

            to_return.set_num_episodes( 14 );
            to_return.set_num_contestants( 14 );

            to_return.set_guest_judges( 20 );
            to_return.set_guest_judge( "Kathy Griffin", 0 );
            to_return.set_guest_judge( "Jordin Sparks", 1 );
            to_return.set_guest_judge( "Olivia Newton-John", 2 );
            to_return.set_guest_judge( "Kat Dennings", 3 );
            to_return.set_guest_judge( "Mel B", 4 );
            to_return.set_guest_judge( "Jessica Alba", 5 );
            to_return.set_guest_judge( "Lucian Piane", 6 );
            to_return.set_guest_judge( "Isaac Mizrahi", 7 );
            to_return.set_guest_judge( "Ariana Grande", 8 );
            to_return.set_guest_judge( "Merle Ginsburg", 9 );
            to_return.set_guest_judge( "Michael Urie", 10 );
            to_return.set_guest_judge( "Tamar Braxton", 11 );      
            to_return.set_guest_judge( "LeAnn Rimes", 12 );
            to_return.set_guest_judge( "Nelsan Ellis", 13 );
            to_return.set_guest_judge( "John Waters", 14 );
            to_return.set_guest_judge( "Demi Lovato", 15 );
            to_return.set_guest_judge( "Alyssa Milano", 16 );
            to_return.set_guest_judge( "Rachel Harris", 17 );
            to_return.set_guest_judge( "Santino Rice", 18 );
            to_return.set_guest_judge( "Rebecca Romijin", 19 );              

            break;
        }

        case 9 : {
            to_return.set_winner( "Sasha Velour" );
            
            std::string *p_us_szn_nine_top_4{ new std::string[4]{"Sasha Velour", "Peppermint", "Shea Couleé", "Trinity Taylor"} };
            to_return.set_top_4( p_us_szn_nine_top_4, 4 );

            std::string *p_us_szn_nine_contestants{ new std::string[14]{"Sasha Velour", "Peppermint", "Shea Couleé", "Trinity Taylor", "Alexis Michelle", "Nina Bo'nina Brown", "Valentina", "Farrah Moan", "Aja", "Cynthia Lee Fontaine", "Eureka O'Hara", "Charlie Hides", "Kimora Blac", "Jaymes Mansfield"} };
            to_return.set_contestants( p_us_szn_nine_contestants, 14 );

            std::string *p_us_szn_nine_finale_songs{ new std::string[3]{"\"So Emotional\" by Whitney Houston", "\"Stronger\" by Britney Spears", "\"It's Not Right but It's Okay (Thunderpuss Mix)\" by Whitney Houston"} };
            to_return.set_finale_songs( p_us_szn_nine_finale_songs, 3 );

            to_return.set_num_episodes( 14 );
            to_return.set_num_contestants( 14 );

            to_return.set_guest_judges( 19 );
            to_return.set_guest_judge( "Lady Gaga", 0 );
            to_return.set_guest_judge( "The B-52s", 1 );
            to_return.set_guest_judge( "Cheyenne Jackson", 2 );
            to_return.set_guest_judge( "Todrick Hall", 3 );
            to_return.set_guest_judge( "Jeffrey Bowyer-Chapman", 4 );
            to_return.set_guest_judge( "Naya Rivera", 5 );
            to_return.set_guest_judge( "Meghan Trainor", 6 );
            to_return.set_guest_judge( "Candis Cayne", 7 );
            to_return.set_guest_judge( "Denis O'Hare", 8 );
            to_return.set_guest_judge( "Jennie Garth", 9 );
            to_return.set_guest_judge( "Tori Spelling", 10 );
            to_return.set_guest_judge( "Tamar Braxton", 11 );      
            to_return.set_guest_judge( "Fortune Feimster", 12 );
            to_return.set_guest_judge( "Noah Galvin", 13 );
            to_return.set_guest_judge( "Lisa Robertson", 14 );
            to_return.set_guest_judge( "Kesha", 15 );
            to_return.set_guest_judge( "Zaldy", 16 );
            to_return.set_guest_judge( "Andie MacDowell", 17 );
            to_return.set_guest_judge( "Joan Smalls", 18 );

            break;
        }

        default : { throw std::logic_error{ "An error has occured... This wasn't supposed to happen..." }; }
    } 
    
    return to_return;

}

Shantay_Season us_create_shant ( unsigned int season ) { 
   
    Shantay_Season to_return{};

    switch ( season ) {
    
        case 3 : {
            to_return.set_winner( "Raja" );
            
            std::string *p_us_szn_three_top_4{ new std::string[4]{"Raja", "Manila Luzon", "Alexis Mateo", "Yara Sofia"} };
            to_return.set_top_4( p_us_szn_three_top_4, 4 );

            std::string *p_us_szn_three_contestants{ new std::string[13]{"Raja", "Manila Luzon", "Alexis Mateo", "Yara Sofia", "Carmen Carrera", "Shangela", "Delta Work", "Stacy Layne Matthews", "Mariah", "India Ferrah", "Mimi Imfurst", "Phoenix", "Venus D-Lite"} };
            to_return.set_contestants( p_us_szn_three_contestants, 13 );
            to_return.set_double_shantay( 3, 4 );

            std::string *p_us_szn_three_finale_songs{ new std::string[1]{"\"Champion (DJ BunJoe's Olympic Mix)\" by RuPaul"} };
            to_return.set_finale_songs( p_us_szn_three_finale_songs, 1 );

            to_return.set_num_episodes( 16 );
            to_return.set_num_contestants( 13 );

            to_return.set_guest_judges( 26 );
            to_return.set_guest_judge( "Bruce Vilanch", 0 );
            to_return.set_guest_judge( "Mike Ruiz", 1 );
            to_return.set_guest_judge( "Vanessa Williams", 2 );
            to_return.set_guest_judge( "Lilly Tomlin", 3 );
            to_return.set_guest_judge( "Alessandra Torresani", 4 );
            to_return.set_guest_judge( "Billy B", 5 );
            to_return.set_guest_judge( "La Toya Jackson", 6 );
            to_return.set_guest_judge( "Susan Powter", 7 );
            to_return.set_guest_judge( "Chloë Sevigny", 8 );
            to_return.set_guest_judge( "Debbie Matenopoulos", 9 );
            to_return.set_guest_judge( "Aisha Tyler", 10 );
            to_return.set_guest_judge( "Amber Rose", 11 );
            to_return.set_guest_judge( "Eliza Dushku", 12 );
            to_return.set_guest_judge( "Sara Rue", 13 );
            to_return.set_guest_judge( "Rita Rudner", 14 );
            to_return.set_guest_judge( "Arden Myrin", 15 );
            to_return.set_guest_judge( "Cheryl Tiegs", 16 );
            to_return.set_guest_judge( "Johnny Weir", 17 );
            to_return.set_guest_judge( "Jeffrey Moran", 18 );
            to_return.set_guest_judge( "Jody Watley", 19 );
            to_return.set_guest_judge( "Carmen Electra", 20 );
            to_return.set_guest_judge( "Wayne Brady", 21 );
            to_return.set_guest_judge( "Fantasia", 22 );
            to_return.set_guest_judge( "Margaret Cho", 23 );
            to_return.set_guest_judge( "Sharon Osbourne", 24 );
            to_return.set_guest_judge( "Gigi Levangie Grazer", 25 );

            break;
        }

        case 6 : {
            to_return.set_winner( "Bianca Del Rio" );
            
            std::string *p_us_szn_six_top_4{ new std::string[4]{"Bianca Del Rio", "Courtney Act", "Adore Delano", "Darienne Lake"} };
            to_return.set_top_4( p_us_szn_six_top_4, 4 );

            std::string *p_us_szn_six_contestants{ new std::string[14]{"Bianca Del Rio", "Courtney Act", "Adore Delano", "Darienne Lake", "BenDeLaCreme", "Joslyn Fox", "Trinity K. Bonet", "Laganja Estranja", "Milk", "Gia Gunn", "April Carrión", "Vivacious", "Magnolia Crawford", "Kelly Mantle"} };
            to_return.set_contestants( p_us_szn_six_contestants, 14 );
            to_return.set_double_shantay( 3, 4 );

            std::string *p_us_szn_six_finale_songs{ new std::string[1]{"\"Sissy That Walk\" by RuPaul"} };
            to_return.set_finale_songs( p_us_szn_six_finale_songs, 1 );

            to_return.set_num_episodes( 14 );
            to_return.set_num_contestants( 14 );

            to_return.set_guest_judges( 23 );
            to_return.set_guest_judge( "Adam Lambert", 0 );
            to_return.set_guest_judge( "Mike Ruiz", 1 );
            to_return.set_guest_judge( "Khloe Kardashian", 2 );
            to_return.set_guest_judge( "Lena Headey", 3 );
            to_return.set_guest_judge( "Linda Blair", 4 );
            to_return.set_guest_judge( "Lucian Piane", 5 );
            to_return.set_guest_judge( "Sheryl Lee Ralph", 6 );
            to_return.set_guest_judge( "Gillian Jacobs", 7 );
            to_return.set_guest_judge( "Heather McDonald", 8 );
            to_return.set_guest_judge( "Eve", 9 );
            to_return.set_guest_judge( "Trina", 10 );
            to_return.set_guest_judge( "Leah Remini", 11 );
            to_return.set_guest_judge( "Lainie Kazan", 12 );
            to_return.set_guest_judge( "Bruce Vilanch", 13 );
            to_return.set_guest_judge( "Jaime Pressly", 14 );
            to_return.set_guest_judge( "Chaz Bono", 15 );
            to_return.set_guest_judge( "Georgia Holt", 16 );
            to_return.set_guest_judge( "Paula Abdul", 17 );
            to_return.set_guest_judge( "Neil Patrick Harris", 18 );
            to_return.set_guest_judge( "David Burtka", 19 );
            to_return.set_guest_judge( "Bob Mackie", 20 );
            to_return.set_guest_judge( "Ian Drew", 21 );
            to_return.set_guest_judge( "Our Lady J", 22 );
            
            break;
        }

        case 10 : {
            to_return.set_winner( "Aquaria" );
            
            std::string *p_us_szn_ten_top_4{ new std::string[4]{"Aquaria", "Eureka", "Kameron Michaels", "Asia O'Hara"} };
            to_return.set_top_4( p_us_szn_ten_top_4, 4 );

            std::string *p_us_szn_ten_contestants{ new std::string[14]{"Aquaria", "Eureka", "Kameron Michaels", "Asia O'Hara", "Miz Cracker", "Monét X Change", "The Vixen", "Monique Heart", "Blair St. Clair", "Mayhem Miller", "Dusty Ray Bottoms", "Yuhua Hamasaki", "Kalorie Karbdashian-Williams", "Vanessa Vanjie Mateo"} };
            to_return.set_contestants( p_us_szn_ten_contestants, 14 );
            to_return.set_double_shantay( 1, 2 );

            std::string *p_us_szn_ten_finale_songs{ new std::string[3]{"\"Nasty\" by Janet Jackson", "\"If\" by Janet Jackson", "\"Bang Bang\" by Jessie J, Ariana Grande, and Nicki Minaj"} };
            to_return.set_finale_songs( p_us_szn_ten_finale_songs, 3 );

            to_return.set_num_episodes( 14 );
            to_return.set_num_contestants( 14 );

            to_return.set_guest_judges( 21 );
            to_return.set_guest_judge( "Christina Aguilera", 0 );
            to_return.set_guest_judge( "Halsey", 1 );
            to_return.set_guest_judge( "Padma Lakshmi", 2 );
            to_return.set_guest_judge( "Courtney Love", 3 );
            to_return.set_guest_judge( "Nico Tortorella", 4 );
            to_return.set_guest_judge( "Tisha Campbell Martin", 5 );
            to_return.set_guest_judge( "Logan Browning", 6 );
            to_return.set_guest_judge( "Shania Twain", 7 );
            to_return.set_guest_judge( "Carrie Preston", 8 );
            to_return.set_guest_judge( "Kumail Nanjiani", 9 );
            to_return.set_guest_judge( "Emily V. Gordon", 10 );
            to_return.set_guest_judge( "Audra McDonald", 11 );
            to_return.set_guest_judge( "Kate Upton", 12 );
            to_return.set_guest_judge( "Billy Eichner", 13 );
            to_return.set_guest_judge( "Andrew Rannells", 14 );
            to_return.set_guest_judge( "Abbi Jacobson", 15 );
            to_return.set_guest_judge( "Ilana Glazer", 16 );
            to_return.set_guest_judge( "Miles Heizer", 17 );
            to_return.set_guest_judge( "Lizzo", 18 );
            to_return.set_guest_judge( "Lena Dunham", 19 );
            to_return.set_guest_judge( "Ashanti", 20 );
            
            break;
        }

        case 11 : {
            to_return.set_winner( "Yvie Oddly" );
            
            std::string *p_us_szn_eleven_top_4{ new std::string[4]{"Yvie Oddly", "Brooke Lynn Hytes", "A'keria Chanel Davenport", "Silky Nutmeg Ganache"} };
            to_return.set_top_4( p_us_szn_eleven_top_4, 4 );

            std::string *p_us_szn_eleven_contestants{ new std::string[15]{"Yvie Oddly", "Brooke Lynn Hytes", "A'keria Chanel Davenport", "Silky Nutmeg Ganache", "Vanessa Vanjie Mateo", "Nina West", "Shuga Cain", "Plastique Tiara", "Ra'Jah O'Hara", "Scarlet Envy", "Ariel Versace", "Mercedes Iman Diamond", "Honey Davenport", "Kahanna Montrese", "Soju"} };
            to_return.set_contestants( p_us_szn_eleven_contestants, 15 );
            to_return.set_double_shantay( 0, 1 );

            std::string *p_us_szn_eleven_finale_songs{ new std::string[3]{"\"Bootylicious\" by Destiny's Child", "\"SOS\" by Rihanna", "\"The Edge Of Glory\" by Lady Gaga"} };
            to_return.set_finale_songs( p_us_szn_eleven_finale_songs, 3 );

            to_return.set_num_episodes( 14 );
            to_return.set_num_contestants( 15 );

            to_return.set_guest_judges( 22 );
            to_return.set_guest_judge( "Miley Cyrus", 0 );
            to_return.set_guest_judge( "Sydelle Noel", 1 );
            to_return.set_guest_judge( "Bobby Moynihan", 2 );
            to_return.set_guest_judge( "Troye Sivan", 3 );
            to_return.set_guest_judge( "Guillermo Diaz", 4 );
            to_return.set_guest_judge( "Tiffany Pollard", 5 );
            to_return.set_guest_judge( "Joel McHale", 6 );
            to_return.set_guest_judge( "Elvira", 7 );
            to_return.set_guest_judge( "Cara Delevingne", 8 );
            to_return.set_guest_judge( "Travis Wall", 9 );
            to_return.set_guest_judge( "Mirai Nagasu", 10 );
            to_return.set_guest_judge( "Adam Rippon", 11 );
            to_return.set_guest_judge( "Amber Valletta", 12 );
            to_return.set_guest_judge( "Kandi Burruss", 13 );
            to_return.set_guest_judge( "Clea DuVall", 14 );
            to_return.set_guest_judge( "Tony Hale", 15 );
            to_return.set_guest_judge( "Natasha Lyonne", 16 );
            to_return.set_guest_judge( "Cheyenne Jackson", 17 );
            to_return.set_guest_judge( "Fortune Feimster", 18 );
            to_return.set_guest_judge( "Gina Rodriguez", 19 );
            to_return.set_guest_judge( "Lena Waith", 20 );
            to_return.set_guest_judge( "Wanda Sykes", 21 );
            
            break;
        }

        case 13 : {
            to_return.set_winner( "Symone" );
            
            std::string *p_us_szn_thirteen_top_4{ new std::string[4]{"Symone", "Kandy Muse", "Gottmik", "Rosé"} };
            to_return.set_top_4( p_us_szn_thirteen_top_4, 4 );

            std::string *p_us_szn_thirteen_contestants{ new std::string[13]{"Symone", "Kandy Muse", "Gottmik", "Rosé", "Olivia Lux", "Utica Queen", "Tina Burner", "Denali", "Elliott with 2 Ts", "LaLa Ri", "Tamisha Iman", "Joey Jay", "Kahmora Hall"} };
            to_return.set_contestants( p_us_szn_thirteen_contestants, 13 );
            to_return.set_double_shantay( 0, 1 );

            std::string *p_us_szn_thirteen_finale_songs{ new std::string[3]{"\"Work Bitch\" by Britney Spears", "\"Gimme More\" by Britney Spears", "\"Till The World Ends\" by Britney Spears"} };
            to_return.set_finale_songs( p_us_szn_thirteen_finale_songs, 3 );

            to_return.set_num_episodes( 16 );
            to_return.set_num_contestants( 13 );

            to_return.set_guest_judges( 5 );
            to_return.set_guest_judge( "Jamal Sims", 0 );
            to_return.set_guest_judge( "Nicole Byer", 1 );
            to_return.set_guest_judge( "Loni Love", 2 );
            to_return.set_guest_judge( "Ts Madison", 3 );
            to_return.set_guest_judge( "Cynthia Erivo", 4 );
            
            break;
        }
        
        default : { throw std::logic_error{ "An error has occured... This wasn't supposed to happen..." }; }

    }

    return to_return; 
}

Sashay_Season us_create_sash ( unsigned int season ) { 
    
    Sashay_Season to_return{};

    switch ( season ) {
    
        case 8 : {
            to_return.set_winner( "Bob The Drag Queen" );
            
            std::string *p_us_szn_eight_top_4{ new std::string[4]{"Bob The Drag Queen", "Kim Chi", "Naomi Smalls", "Chi Chi DeVayne"} };
            to_return.set_top_4( p_us_szn_eight_top_4, 4 );

            std::string *p_us_szn_eight_contestants{ new std::string[12]{"Bob The Drag Queen", "Kim Chi", "Naomi Smalls", "Chi Chi DeVayne", "Derrick Berry", "Thorgy Thor", "Robbie Turner", "Acid Betty", "Naysha Lopez", "Cynthia Lee Fontaine", "Dax ExclamationPoint", "Laila McQueen"} };
            to_return.set_contestants( p_us_szn_eight_contestants, 12 );
            to_return.set_double_sashay( 10, 11 );

            std::string *p_us_szn_eight_finale_songs{ new std::string[3]{"\"I Don't Like to Show Off\" (Bob the Drag Queen)", "\"Fat Fem and Asian\" (Kim Chi)", "\"Legs\" (Naomi Smalls)"} };
            to_return.set_finale_songs( p_us_szn_eight_finale_songs, 3 );

            to_return.set_num_episodes( 10 );
            to_return.set_num_contestants( 12 );

            to_return.set_guest_judges( 16 );
            to_return.set_guest_judge( "Nicole Richie", 0 );
            to_return.set_guest_judge( "Ester Dean", 1 );
            to_return.set_guest_judge( "Jamal Sims", 2 );
            to_return.set_guest_judge( "Lucian Piane", 3 );
            to_return.set_guest_judge( "Faith Evans", 4 );
            to_return.set_guest_judge( "Tasha Smith", 5 );
            to_return.set_guest_judge( "Debbie Harry", 6 );
            to_return.set_guest_judge( "Chris Stein", 7 );
            to_return.set_guest_judge( "Gigi Hadid", 8 );
            to_return.set_guest_judge( "Chanel Iman", 9 );
            to_return.set_guest_judge( "Todrick Hall", 10 );
            to_return.set_guest_judge( "Marc Jacobs", 11 );
            to_return.set_guest_judge( "Thomas Roberts", 12 );
            to_return.set_guest_judge( "Vivica A. Fox", 13 );
            to_return.set_guest_judge( "Amy Sedaris", 14 );
            to_return.set_guest_judge( "David Sedaris", 15 );

            break;
        }

        default : { throw std::logic_error{ "An error has occured... This wasn't supposed to happen..." }; }

    } 

    return to_return; 
}

Disqualified_Season us_create_disq ( unsigned int season ) { 

    Disqualified_Season to_return{};

    switch ( season ) {
    
        case 4 : {
            to_return.set_winner( "Sharon Needles" );
            
            std::string *p_us_szn_four_top_4{ new std::string[4]{"Sharon Needles", "Chad Michaels", "Phi Phi O'Hara", "Latrice Royale"} };
            to_return.set_top_4( p_us_szn_four_top_4, 4 );

            std::string *p_us_szn_four_contestants{ new std::string[13]{"Sharon Needles", "Chad Michaels", "Phi Phi O'Hara", "Latrice Royale", "Kenya Michaels", "Dida Ritz", "Willam", "Jiggly Caliente", "Milan", "Madame LaQueer", "The Princess", "Lashauwn Beyond", "Alisa Summers"} };
            to_return.set_contestants( p_us_szn_four_contestants, 13 );
            to_return.set_disqualified( 6 );

            std::string *p_us_szn_four_finale_songs{ new std::string[1]{"\"Glamazon\" by RuPaul"} };
            to_return.set_finale_songs( p_us_szn_four_finale_songs, 1 );

            to_return.set_num_episodes( 14 );
            to_return.set_num_contestants( 13 );

            to_return.set_guest_judges( 24 );
            to_return.set_guest_judge( "Cassandra Peterson", 0 );
            to_return.set_guest_judge( "Mike Ruiz", 1 );
            to_return.set_guest_judge( "Rick Fox", 2 );
            to_return.set_guest_judge( "John Salley", 3 );
            to_return.set_guest_judge( "Amber Riley", 4 );
            to_return.set_guest_judge( "Natalie Cole", 5 );
            to_return.set_guest_judge( "Billy B.", 6 );
            to_return.set_guest_judge( "Nicole Sullivan", 7 );
            to_return.set_guest_judge( "Max Mutchnick", 8 );
            to_return.set_guest_judge( "Loretta Devine", 9 );
            to_return.set_guest_judge( "Ross Matthews", 10 );
            to_return.set_guest_judge( "Kelly Osbourne", 11 );
            to_return.set_guest_judge( "Pauley Perrette", 12 );
            to_return.set_guest_judge( "Regina King", 13 );
            to_return.set_guest_judge( "Pam Tillis", 14 );
            to_return.set_guest_judge( "Lucian Piane", 15 );
            to_return.set_guest_judge( "Pamela Anderson", 16 );
            to_return.set_guest_judge( "Jennifer Tilly", 17 );
            to_return.set_guest_judge( "Dan Savage", 18 );
            to_return.set_guest_judge( "Jeffry Moran", 19 );
            to_return.set_guest_judge( "Jesse Tyler Ferguson", 20 );
            to_return.set_guest_judge( "Jennifer Love Hewitt", 21 );
            to_return.set_guest_judge( "Rose McGowan", 22 );
            to_return.set_guest_judge( "Wynonna Judd", 23 );

            break;
        }

        default : { throw std::logic_error{ "An error has occured... This wasn't supposed to happen..." }; }

    }     

    return to_return; 
}

Disq_Shant us_disq_shant ( unsigned int season ) {
    
    Disq_Shant to_return{}; 

    switch ( season ) {
    
        case 12 : {
            to_return.set_winner( "Jaida Essence Hall" );
            
            std::string *p_us_szn_twelve_top_4{ new std::string[4]{"Jaida Essence Hall", "Crystal Methyd", "Gigi Goode", "Sherry Pie"} };
            to_return.set_top_4( p_us_szn_twelve_top_4, 4 );

            to_return.set_num_contestants( 13 );
            std::string *p_us_szn_twelve_contestants{ new std::string[ to_return.get_num_contestants() ]{"Jaida Essence Hall", "Crystal Methyd", "Gigi Goode", "Sherry Pie", "Jackie Cox", "Heidi N Closet", "Widow Von'Du", "Jan", "Brita", "Aiden Zhane", "Nicky Doll", "Rock M. Sakura", "Dahlia Sin"} };
            to_return.set_contestants( p_us_szn_twelve_contestants, to_return.get_num_contestants() );
            to_return.set_double_shantay( 4, 5 );
            to_return.set_disqualified( 3 );

            std::string *p_us_szn_twelve_finale_songs{ new std::string[5]{"\"Bring Back My Girls\" by RuPaul", "\"I'm Like a Bird\" by Nelly Furtado", "\"Take On Me\" by a-ha", "\"Get Up\" by Ciara", "\"Survivor\" by Destiny's Child"} };
            to_return.set_finale_songs( p_us_szn_twelve_finale_songs, 5 );

            to_return.set_num_episodes( 14 );

            to_return.set_guest_judges( 16 );
            to_return.set_guest_judge( "Nicki Minaj", 0 );
            to_return.set_guest_judge( "Robyn", 1 );
            to_return.set_guest_judge( "Thandie Newton", 2 );
            to_return.set_guest_judge( "Olivia Munn", 3 );
            to_return.set_guest_judge( "Leslie Jones", 4 );
            to_return.set_guest_judge( "Normani", 5 );
            to_return.set_guest_judge( "Daniel Franzese", 6 );
            to_return.set_guest_judge( "Jonathan Bennett", 7 );
            to_return.set_guest_judge( "Alexandria Ocasio-Cortez", 8 );
            to_return.set_guest_judge( "Winnie Harlow", 9 );
            to_return.set_guest_judge( "Chaka Khan", 10 );
            to_return.set_guest_judge( "Jeff Goldblum", 11 );
            to_return.set_guest_judge( "Rachel Bloom", 12 );
            to_return.set_guest_judge( "Daisy Ridley", 13 );
            to_return.set_guest_judge( "Whoopi Goldberg", 14 );
            to_return.set_guest_judge( "Jamal Sims", 15 );

            break;
        }

        default : { throw std::logic_error{ "An error has occured... This wasn't supposed to happen..." }; }

    }
    return to_return;
}

Sash_Shant us_sash_shant ( unsigned int season ) {

    Disq_Sash_Shant to_return{}; 

    switch ( season ) {
    
        case 5 : {
            to_return.set_winner( "Jinkx Monsoon" );
            
            std::string *p_us_szn_five_top_4{ new std::string[4]{"Jinkx Monsoon", "Alaska", "Roxxxy Andrews", "Detox"} };
            to_return.set_top_4( p_us_szn_five_top_4, 4 );

            to_return.set_num_contestants( 14 );
            std::string *p_us_szn_five_contestants{ new std::string[ to_return.get_num_contestants() ]{"Jinkx Monsoon", "Alaska", "Roxxxy Andrews", "Detox", "Coco Montrese", "Alyssa Edwards", "Ivy Winters", "Jade Jolie", "Linaysha Sparx", "Honey Mahogany", "Vivienne Pinay", "Monica Beverly Hillz", "Serena ChaCha", "Penny Tration"} };
            to_return.set_contestants( p_us_szn_five_contestants, to_return.get_num_contestants() );
            to_return.set_double_shantay( 2, 5 );
            to_return.set_double_sashay( 9, 10 );

            std::string *p_us_szn_five_finale_songs{ new std::string[1]{"\"The Beginning\" by RuPaul"} };
            to_return.set_finale_songs( p_us_szn_five_finale_songs, 1 );

            to_return.set_num_episodes( 14 );

            to_return.set_guest_judges( 22 );
            to_return.set_guest_judge( "Camille Grammer", 0 );
            to_return.set_guest_judge( "Mike Ruiz", 1 );
            to_return.set_guest_judge( "Kristen Johnston", 2 );
            to_return.set_guest_judge( "Juliette Lewis", 3 );
            to_return.set_guest_judge( "Coco Austin", 4 );
            to_return.set_guest_judge( "Paulina Porizkova", 5 );
            to_return.set_guest_judge( "Chaz Bono", 6 );
            to_return.set_guest_judge( "Travis Wall", 7 );
            to_return.set_guest_judge( "Julie Brown", 8 );
            to_return.set_guest_judge( "Downtown Julie Brown", 9 );
            to_return.set_guest_judge( "La Toya Jackson", 10 );
            to_return.set_guest_judge( "The Pointer Sisters", 11 );
            to_return.set_guest_judge( "Leslie Jordan", 12 );
            to_return.set_guest_judge( "Jeffrey Moran", 13 );
            to_return.set_guest_judge( "Aubrey O'Day", 14 );
            to_return.set_guest_judge( "Joan Van Ark", 15 );
            to_return.set_guest_judge( "Maria Conchita Alonso", 16 );
            to_return.set_guest_judge( "Jamie-Lynn Sigler", 17 );
            to_return.set_guest_judge( "Clinton Kelly", 18 );
            to_return.set_guest_judge( "George Kotsiopoulos", 19 );
            to_return.set_guest_judge( "Marg Helgenberger", 20 );
            to_return.set_guest_judge( "Bob Mackie", 21 );

            break;
        }

        default : { throw std::logic_error{ "An error has occured... This wasn't supposed to happen..." }; }

    }
    return to_return;

}

Season uk_create_base ( unsigned int season ) { 
    
    Season to_return{};

    switch ( season ) {
    
        case 1 : {
            to_return.set_winner( "The Vivienne" );
            
            std::string *p_uk_szn_one_top_4{ new std::string[4]{"The Vivienne", "Divina De Campo", "Baga Chipz", "Cheryl Hole"} };
            to_return.set_top_4( p_uk_szn_one_top_4, 4 );

            std::string *p_uk_szn_one_contestants{ new std::string[10]{"The Vivienne", "Divina De Campo", "Baga Chipz", "Cheryl Hole", "Crystal", "Sum Ting Wong", "Vinegar Strokes", "Scaredy Kat", "Gothy Kendoll"} };
            to_return.set_contestants( p_uk_szn_one_contestants, 10 );

            std::string *p_uk_szn_one_finale_songs{ new std::string[1]{"\"I'm Your Man\" by Wham!"} };
            to_return.set_finale_songs( p_uk_szn_one_finale_songs, 1 );

            to_return.set_num_episodes( 9 );
            to_return.set_num_contestants( 10 );

            to_return.set_guest_judges( 7 );
            to_return.set_guest_judge( "Andrew Garfield", 0 );
            to_return.set_guest_judge( "Maisie Williams", 1 );
            to_return.set_guest_judge( "Dame Twiggy", 2 );
            to_return.set_guest_judge( "Geri Horner", 3 );
            to_return.set_guest_judge( "Jade Thirlwall", 4 );
            to_return.set_guest_judge( "Cheryl", 5 );
            to_return.set_guest_judge( "Michaela Coel", 6 );            

            break;
        }

        default : { throw std::logic_error{ "An error has occured... This wasn't supposed to happen..." }; }
    } 
    
    return to_return;
 }

Shantay_Season uk_create_shant ( unsigned int season ) { 
    
    Shantay_Season to_return{}; 

    switch ( season ) {
    
        case 2 : {
            to_return.set_winner( "Lawrence Chaney" );
            
            std::string *p_uk_szn_two_top_4{ new std::string[4]{"Lawrence Chaney", "Bimini Bon-Boulash", "Tayce", "Ellie Diamond"} };
            to_return.set_top_4( p_uk_szn_two_top_4, 4 );

            to_return.set_num_contestants( 12 );
            std::string *p_uk_szn_two_contestants{ new std::string[ to_return.get_num_contestants() ]{"Lawrence Chaney", "Bimini Bon-Boulash", "Tayce", "Ellie Diamond", "A'Whora", "Sister Sister", "Tia Kofi", "Joe Black", "Veronica Green", "Ginny Lemon", "Asttina Mandella", "Cherry Valentine"} };
            to_return.set_contestants( p_uk_szn_two_contestants, to_return.get_num_contestants() );
            to_return.set_double_shantay( 2, 3 );

            std::string *p_uk_szn_two_finale_songs{ new std::string[1]{"\"I'm Still Standing\" by Elton John"} };
            to_return.set_finale_songs( p_uk_szn_two_finale_songs, 1 );

            to_return.set_num_episodes( 10 );

            to_return.set_guest_judges( 8 );
            to_return.set_guest_judge( "Elizabeth Hurley", 0 );
            to_return.set_guest_judge( "Sheridan Smith", 1 );
            to_return.set_guest_judge( "Jourdan Dunn", 2 );
            to_return.set_guest_judge( "Lorraine Kelly", 3 );
            to_return.set_guest_judge( "MNEK", 4 );
            to_return.set_guest_judge( "Jessie Ware", 5 );
            to_return.set_guest_judge( "Maya Jama", 6 );
            to_return.set_guest_judge( "Dawn French", 7 );

            break;
        }

        default : { throw std::logic_error{ "An error has occured... This wasn't supposed to happen..." }; }

    }
    return to_return; 
}

Disq_Sash_Shant uk_disq_sash_shant ( unsigned int season ) { 
    
    Disq_Sash_Shant to_return{}; 

    switch ( season ) {
    
        case 3 : {
            to_return.set_winner( "Krystal Versace" );
            
            std::string *p_uk_szn_three_top_4{ new std::string[4]{"Krystal Versace", "Ella Vaday", "Kitty Scott-Claus", "Vanity Milan"} };
            to_return.set_top_4( p_uk_szn_three_top_4, 4 );

            to_return.set_num_contestants( 12 );
            std::string *p_uk_szn_three_contestants{ new std::string[ to_return.get_num_contestants() ]{"Krystal Versace", "Ella Vaday", "Kitty Scott-Claus", "Vanity Milan", "Scarlett Harlett", "Choriza May", "River Medway", "Charity Kase", "Veronica Green", "Victoria Scone", "Elektra Fence", "Anubis"} };
            to_return.set_contestants( p_uk_szn_three_contestants, to_return.get_num_contestants() );
            to_return.set_double_shantay( 4, 7 );
            to_return.set_double_sashay( 5, 6 );
            to_return.set_disqualified( 9 );

            std::string *p_uk_szn_three_finale_songs{ new std::string[1]{"\"You Don't Own Me\" by Dusty Springfield"} };
            to_return.set_finale_songs( p_uk_szn_three_finale_songs, 1 );

            to_return.set_num_episodes( 10 );

            to_return.set_guest_judges( 9 );
            to_return.set_guest_judge( "Matt Lucas", 0 );
            to_return.set_guest_judge( "Oti Mabuse", 1 );
            to_return.set_guest_judge( "Nicola Coughlan", 2 );
            to_return.set_guest_judge( "Emma Bunton", 3 );
            to_return.set_guest_judge( "Leigh-Anne Pinnock", 4 );
            to_return.set_guest_judge( "Lulu", 5 );
            to_return.set_guest_judge( "Alesha Dixon", 6 );
            to_return.set_guest_judge( "Russell Tovey", 7 );
            to_return.set_guest_judge( "Kathy Burke", 8 );

            break;
        }

        default : { throw std::logic_error{ "An error has occured... This wasn't supposed to happen..." }; }

    }
    return to_return;
    
}

Season canada_create_base ( unsigned int season ) { 
    
    Season to_return{}; 
    
    switch ( season ) {
    
        case 1 : {
            to_return.set_winner( "Priyanka" );
            
            std::string *p_canada_szn_one_top_4{ new std::string[4]{"Priyanka", "Rita Baga", "Scarlett BoBo", "Jimbo"} };
            to_return.set_top_4( p_canada_szn_one_top_4, 4 );

            to_return.set_num_contestants( 12 );
            std::string *p_canada_szn_one_contestants{ new std::string[ to_return.get_num_contestants() ]{"Priyanka", "Rita Baga", "Scarlett BoBo", "Jimbo", "Lemon", "Ilona Verley", "BOA", "Kiara", "Tynomi Banks", "Anastarzia Anaquway", "Kyne", "Juice Boxx"} };
            to_return.set_contestants( p_canada_szn_one_contestants, to_return.get_num_contestants() );

            std::string *p_canada_szn_one_finale_songs{ new std::string[1]{"\"You're A Superstar\" by Love Inc."} };
            to_return.set_finale_songs( p_canada_szn_one_finale_songs, 1 );

            to_return.set_num_episodes( 10 );

            to_return.set_guest_judges( 10 );
            to_return.set_guest_judge( "Elisha Cuthbert", 0 );
            to_return.set_guest_judge( "Jade Hassouné", 1 );
            to_return.set_guest_judge( "Deborah Cox", 2 );
            to_return.set_guest_judge( "Biddell", 3 );
            to_return.set_guest_judge( "Mary Walsh", 4 );
            to_return.set_guest_judge( "Tom Green", 5 );
            to_return.set_guest_judge( "Allie X", 6 );   
            to_return.set_guest_judge( "Amanda Brugel", 7 );            
            to_return.set_guest_judge( "Michelle Visage", 8 );
            to_return.set_guest_judge( "Traci Melchor", 9 );            

            break;
        }

        case 2 : {
            to_return.set_winner( "Icesis Couture" );
            
            std::string *p_canada_szn_two_top_4{ new std::string[4]{"Icesis Couture", "Kendall Gender", "Pythia", "Gia Metric"} };
            to_return.set_top_4( p_canada_szn_two_top_4, 4 );

            to_return.set_num_contestants( 12 );
            std::string *p_canada_szn_two_contestants{ new std::string[ to_return.get_num_contestants() ]{"Icesis Couture", "Kendall Gender", "Pythia", "Gia Metric", "Adriana", "Kimora Amour", "Synthia Kiss", "Eve 6000", "Suki Doll", "Stephanie Prince", "Oceane Aqua-Black", "Beth"} };
            to_return.set_contestants( p_canada_szn_two_contestants, to_return.get_num_contestants() );

            std::string *p_canada_szn_two_finale_songs{ new std::string[1]{"\"It's All Coming Back to Me Now\" by Celine Dion"} };
            to_return.set_finale_songs( p_canada_szn_two_finale_songs, 1 );

            to_return.set_num_episodes( 10 );

            to_return.set_guest_judges( 8 );
            to_return.set_guest_judge( "Caitlin Cronenberg", 0 );
            to_return.set_guest_judge( "Hollywood Jade", 1 );
            to_return.set_guest_judge( "Fefe Dobson", 2 );
            to_return.set_guest_judge( "Connor Jessup", 3 );
            to_return.set_guest_judge( "Bif Naked", 4 );
            to_return.set_guest_judge( "Gigi Gorgeous", 5 );
            to_return.set_guest_judge( "Emma Hunter", 6 );   
            to_return.set_guest_judge( "Mitsou", 7 );           

            break;
        }

        default : { throw std::logic_error{ "An error has occured... This wasn't supposed to happen..." }; }
    }

    return to_return; 
}

Season holland_create_base ( unsigned int season ) { 
    
    Season to_return{}; 
    
    switch ( season ) {

        case 2 : {
            to_return.set_winner( "Vanessa Van Cartier" );
            
            std::string *p_holland_szn_two_top_4{ new std::string[4]{"Vanessa Van Cartier", "My Little Puny", "Vivaldi", "Keta Minaj"} };
            to_return.set_top_4( p_holland_szn_two_top_4, 4 );

            to_return.set_num_contestants( 10 );
            std::string *p_holland_szn_two_contestants{ new std::string[ to_return.get_num_contestants() ]{"Vanessa Van Cartier", "My Little Puny", "Vivaldi", "Keta Minaj", "Tabitha", "The Countess", "Ivy-Elyse", "Love Masisi", "Reggy B", "Juicy Kutoure"} };
            to_return.set_contestants( p_holland_szn_two_contestants, to_return.get_num_contestants() );

            std::string *p_holland_szn_two_finale_songs{ new std::string[1]{"\"This Is My Life\" by Shirley Bassey"} };
            to_return.set_finale_songs( p_holland_szn_two_finale_songs, 1 );

            to_return.set_num_episodes( 8 );

            to_return.set_guest_judges( 9 );
            to_return.set_guest_judge( "Elise Schaap", 0 );
            to_return.set_guest_judge( "Soundos El Ahmadi", 1 );
            to_return.set_guest_judge( "Buddy Vedder", 2 );
            to_return.set_guest_judge( "Freek Bartels", 3 );
            to_return.set_guest_judge( "Alex Klaasen", 4 );
            to_return.set_guest_judge( "Merol", 5 );
            to_return.set_guest_judge( "Glennis Grace", 6 );   
            to_return.set_guest_judge( "Tina de Bruin", 7 ); 
            to_return.set_guest_judge( "Envy Peru", 8 );           

            break;
        }

        default : { throw std::logic_error{ "An error has occured... This wasn't supposed to happen..." }; }
    }

    return to_return; 
}

Shantay_Season holland_create_shant ( unsigned int season ) { 
    
    Shantay_Season to_return{}; 
    
    switch ( season ) {

        case 1 : {
            to_return.set_winner( "Envy Peru" );
            
            std::string *p_holland_szn_one_top_4{ new std::string[4]{"Envy Peru", "Janey Jacké", "Ma'Ma Queen", "Miss Abby OMG"} };
            to_return.set_top_4( p_holland_szn_one_top_4, 4 );

            to_return.set_num_contestants( 10 );
            std::string *p_holland_szn_one_contestants{ new std::string[ to_return.get_num_contestants() ]{"Envy Peru", "Janey Jacké", "Ma'Ma Queen", "Miss Abby OMG", "ChelseaBoy", "Sederginne", "Madame Madness", "Megan Schoonbrood", "Patty Pam-Pam", "Roem"} };
            to_return.set_contestants( p_holland_szn_one_contestants, to_return.get_num_contestants() );
            to_return.set_double_shantay( 2, 3 );

            std::string *p_holland_szn_one_finale_songs{ new std::string[1]{"\"Born This Way\" by Lady Gaga"} };
            to_return.set_finale_songs( p_holland_szn_one_finale_songs, 1 );

            to_return.set_num_episodes( 8 );

            to_return.set_guest_judges( 11 );
            to_return.set_guest_judge( "Sanne Wallis de Vries", 0 );
            to_return.set_guest_judge( "Claes Iversen", 1 );
            to_return.set_guest_judge( "NikkieTutorials", 2 );
            to_return.set_guest_judge( "Roxeanne Hazes", 3 );
            to_return.set_guest_judge( "Rick Paul van Mulligen", 4 );
            to_return.set_guest_judge( "Amber Vineyard", 5 );
            to_return.set_guest_judge( "Carlo Boszhard", 6 );   
            to_return.set_guest_judge( "Ruth Jacott", 7 ); 
            to_return.set_guest_judge( "Raven van Dorst", 8 );
            to_return.set_guest_judge( "Loiza Lamers", 9 );           
            to_return.set_guest_judge( "Edsilia Rombley", 10 );      

            break;
        }

        default : { throw std::logic_error{ "An error has occured... This wasn't supposed to happen..." }; }
    }

    return to_return;
    
}

Season spain_create_base ( unsigned int season ) { 
    
    Season to_return{}; 
    
    switch ( season ) {

        case 1 : {
            to_return.set_winner( "Carmen Farala" );
            
            std::string *p_spain_szn_one_top_4{ new std::string[4]{"Carmen Farala", "Killer Queen", "Sagittaria", "Pupi Poisson"} };
            to_return.set_top_4( p_spain_szn_one_top_4, 4 );

            to_return.set_num_contestants( 10 );
            std::string *p_spain_szn_one_contestants{ new std::string[ to_return.get_num_contestants() ]{"Carmen Farala", "Killer Queen", "Sagittaria", "Pupi Poisson", "Dovima Nurmi", "Hugáceo Crujiente", "Arantxa Castilla La Mancha", "Inti", "Drag Vulcano", "The Macarena"} };
            to_return.set_contestants( p_spain_szn_one_contestants, to_return.get_num_contestants() );

            std::string *p_spain_szn_one_finale_songs{ new std::string[1]{"\"La gata bajo la lluvia\" by Rocío Dúrcal"} };
            to_return.set_finale_songs( p_spain_szn_one_finale_songs, 1 );

            to_return.set_num_episodes( 10 );

            to_return.set_guest_judges( 7 );
            to_return.set_guest_judge( "Jon Kortajarena", 0 );
            to_return.set_guest_judge( "Paca La Piraña", 1 );
            to_return.set_guest_judge( "Carlos Areces", 2 );
            to_return.set_guest_judge( "Bad Gyal", 3 );
            to_return.set_guest_judge( "Alaska", 4 );
            to_return.set_guest_judge( "Susi Caramelo", 5 );
            to_return.set_guest_judge( "Envy Peru", 6 );      

            break;
        }

        default : { throw std::logic_error{ "An error has occured... This wasn't supposed to happen..." }; }
    }

    return to_return; 
    
}

Sash_Shant thailand_sash_shant ( unsigned int season ) { 

    Disq_Sash_Shant to_return{}; 

    switch ( season ) {
    
        case 1 : {
            to_return.set_winner( "Natalia Pliacam" );
            
            std::string *p_thailand_szn_one_top_4{ new std::string[4]{"Natalia Pliacam", "Annee Maywong", "Dearis Doll", "B Ella"} };
            to_return.set_top_4( p_thailand_szn_one_top_4, 4 );

            to_return.set_num_contestants( 10 );
            std::string *p_thailand_szn_one_contestants{ new std::string[ to_return.get_num_contestants() ]{"Natalia Pliacam", "Annee Maywong", "Dearis Doll", "B Ella", "Amadiva", "JAJA", "Petchra", "Morrigan", "Bunny Be Fly", "Meannie Minaj"} };
            to_return.set_contestants( p_thailand_szn_one_contestants, to_return.get_num_contestants() );
            to_return.set_double_shantay( 4, 5 );
            to_return.set_double_sashay( 4, 5 );

            std::string *p_thailand_szn_one_finale_songs{ new std::string[1]{""} };
            to_return.set_finale_songs( p_thailand_szn_one_finale_songs, 1 );

            to_return.set_num_episodes( 8 );

            to_return.set_guest_judges( 18 );
            to_return.set_guest_judge( "Madame Mod", 0 );
            to_return.set_guest_judge( "Madeaw", 1 );
            to_return.set_guest_judge( "Pa-Tue", 2 );
            to_return.set_guest_judge( "Marsha Vadhanapanich", 3 );
            to_return.set_guest_judge( "Jai Sira", 4 );
            to_return.set_guest_judge( "Cris Horwang", 5 );
            to_return.set_guest_judge( "Mae Ban Mee Nuad", 6 );
            to_return.set_guest_judge( "Prapakas \"Pak Kad\" Angsulin", 7 );
            to_return.set_guest_judge( "Pattriya \"Vampye\" Na Nakorn", 8 );
            to_return.set_guest_judge( "Sinjai \"Nok\" Plengpanich", 9 );
            to_return.set_guest_judge( "Ananda Everingham", 10 );
            to_return.set_guest_judge( "Polpat \"Mhoo\" Asavaprapha", 11 );
            to_return.set_guest_judge( "Metinee \"Lukkade\" Kingpayom", 12 );
            to_return.set_guest_judge( "Ornapha \"Maa\" Krisadeem", 13 );
            to_return.set_guest_judge( "Araya \"Chompoo\" A. Hargate", 14 );
            to_return.set_guest_judge( "Ploy Chermarn", 15 );
            to_return.set_guest_judge( "Utt Uttsada", 16 );
            to_return.set_guest_judge( "Chom", 17 );

            break;
        }

        default : { throw std::logic_error{ "An error has occured... This wasn't supposed to happen..." }; }

    }
    return to_return;
}

Disq_Sash_Shant thailand_disq_sash_shant ( unsigned int season ) { 
    
    Disq_Sash_Shant to_return{}; 

    switch ( season ) {
    
        case 2 : {
            to_return.set_winner( "Angele Anang" );
            
            std::string *p_thailand_szn_two_top_4{ new std::string[4]{"Angele Anang", "Kana Warrior", "Kandy Zyanide", "Bandit"} };
            to_return.set_top_4( p_thailand_szn_two_top_4, 4 );

            to_return.set_num_contestants( 14 );
            std::string *p_thailand_szn_two_contestants{ new std::string[ to_return.get_num_contestants() ]{"Angele Anang", "Kana Warrior", "Kandy Zyanide", "Bandit", "Vanda Miss Joaquim", "Srimala", "Tormai", "Genie", "Miss Gimhuay", "Mocha Diva", "Maya B'Haro", "Katy Killer", "Silver Sonic", 	"M Stranger Fox"} };
            to_return.set_contestants( p_thailand_szn_two_contestants, to_return.get_num_contestants() );
            to_return.set_double_shantay( 0, 1 );
            to_return.set_double_sashay( 1, 10 );
            to_return.set_disqualified( 8 );

            std::string *p_thailand_szn_two_finale_songs{ new std::string[1]{""} };
            to_return.set_finale_songs( p_thailand_szn_two_finale_songs, 1 );

            to_return.set_num_episodes( 13 );

            to_return.set_guest_judges( 28 );
            to_return.set_guest_judge( "Yai Amat Nimitpark", 0 );
            to_return.set_guest_judge( "Pitt Karchai", 1 );
            to_return.set_guest_judge( "Tae Piyarat", 2 );
            to_return.set_guest_judge( "Nut Prakopsantisook", 3 );
            to_return.set_guest_judge( "Sonya Cooling", 4 );
            to_return.set_guest_judge( "Vatanika", 5 );
            to_return.set_guest_judge( "Sakuntala Thianphairot", 6 );
            to_return.set_guest_judge( "\"Bobby\" Robert Poonpipat", 7 );
            to_return.set_guest_judge( "\"Mam\" Surivipa Poonpipat", 8 );
            to_return.set_guest_judge( "Cindy Bishop", 9 );
            to_return.set_guest_judge( "Pae Arak", 10 );
            to_return.set_guest_judge( "Maria Lynn Ehren", 11 );
            to_return.set_guest_judge( "John Winyu", 12 );
            to_return.set_guest_judge( "Moo Asava", 13 );
            to_return.set_guest_judge( "Rusameekae", 14 );
            to_return.set_guest_judge( "Madame Mod", 15 );
            to_return.set_guest_judge( "Hungry", 16 );
            to_return.set_guest_judge( "Metinee Kingpayom", 17 );
            to_return.set_guest_judge( "\"Pancake\" Khemanit Jamikorn", 18 );
            to_return.set_guest_judge( "Apaporn Nakornsawan", 19 );
            to_return.set_guest_judge( "Jennifer Kim", 20 );
            to_return.set_guest_judge( "Sombat \"Tue\" Tirasaroj", 21 );
            to_return.set_guest_judge( "New & Jiew", 22 );
            to_return.set_guest_judge( "New Atiwat", 23 );
            to_return.set_guest_judge( "Petch Paopetch", 24 );
            to_return.set_guest_judge( "Debbie Bazoo", 25 );
            to_return.set_guest_judge( "Gene Kasidit", 26 );
            to_return.set_guest_judge( "Jai Sira", 27 );

            break;
        }

        default : { throw std::logic_error{ "An error has occured... This wasn't supposed to happen..." }; }

    }
    return to_return;
    
}

Shantay_Season italia_create_shant ( unsigned int season ) { 
    
    Shantay_Season to_return{}; 
    
    switch ( season ) {

        case 1 : {
            to_return.set_winner( "Elecktra Bionic" );
            
            std::string *p_italia_szn_one_top_4{ new std::string[4]{"Elecktra Bionic", "Farida Kant", "Le Riche", "Luquisha Lubamba"} };
            to_return.set_top_4( p_italia_szn_one_top_4, 4 );

            to_return.set_num_contestants( 8 );
            std::string *p_italia_szn_one_contestants{ new std::string[ to_return.get_num_contestants() ]{"Elecktra Bionic", "Farida Kant", "Le Riche", "Luquisha Lubamba", "Ava Hangar", "Divinity", "Enorma Jean", "Ivana Vamp"} };
            to_return.set_contestants( p_italia_szn_one_contestants, to_return.get_num_contestants() );
            to_return.set_double_shantay( 3, 5 );

            std::string *p_italia_szn_one_finale_songs{ new std::string[1]{"\"Non Sono Una Signora\" by Loredana Bertè"} };
            to_return.set_finale_songs( p_italia_szn_one_finale_songs, 1 );

            to_return.set_num_episodes( 6 );

            to_return.set_guest_judges( 10 );
            to_return.set_guest_judge( "Cristina D'Avena", 0 );
            to_return.set_guest_judge( "Fabio Mollo", 1 );
            to_return.set_guest_judge( "Gianmarco Saurino", 2 );
            to_return.set_guest_judge( "Nick Cerioni", 3 );
            to_return.set_guest_judge( "Vladimir Luxuria", 4 );
            to_return.set_guest_judge( "Giancarlo Commare", 5 );
            to_return.set_guest_judge( "Donatella Rettore", 6 );   
            to_return.set_guest_judge( "Coco Rebecca Edogamhe", 7 ); 
            to_return.set_guest_judge( "Enzo Miccio", 8 );
            to_return.set_guest_judge( "Ambra Angiolini", 9 );           

            break;
        }

        default : { throw std::logic_error{ "An error has occured... This wasn't supposed to happen..." }; }
    }

    return to_return;

 }

Season down_under_create_base ( unsigned int season ) {
    
    Season to_return{}; 
    
    switch ( season ) {

        case 1 : {
            to_return.set_winner( "Kita Mean" );
            
            std::string *p_down_under_szn_one_top_4{ new std::string[4]{"Kita Mean", "Art Simone", "Karen From Finance", "Scarlet Adams"} };
            to_return.set_top_4( p_down_under_szn_one_top_4, 4 );

            to_return.set_num_contestants( 10 );
            std::string *p_down_under_szn_one_contestants{ new std::string[ to_return.get_num_contestants() ]{"Kita Mean", "Art Simone", "Karen From Finance", "Scarlet Adams", "Maxi Shield", "Etcetera Etcetera", "Anita Wigl'It", "Coco Jumbo", "Jojo Zaho"} };
            to_return.set_contestants( p_down_under_szn_one_contestants, to_return.get_num_contestants() );

            std::string *p_down_under_szn_one_finale_songs{ new std::string[1]{"\"Physical\" by Olivia-Newton-John"} };
            to_return.set_finale_songs( p_down_under_szn_one_finale_songs, 1 );

            to_return.set_num_episodes( 8 );

            to_return.set_guest_judges( 2 );
            to_return.set_guest_judge( "Elz Carrad", 0 );
            to_return.set_guest_judge( "Rena Owen", 1 );    

            break;
        }

        default : { throw std::logic_error{ "An error has occured... This wasn't supposed to happen..." }; }
    }

    return to_return;
}

All_Stars allstars_create_season ( unsigned int season ) {
    
    All_Stars to_return{};

    switch ( season ) {

        case 1 : {
            to_return.set_winner( "Chad Michaels" );
            
            std::string *p_all_stars_1_top_4{ new std::string[4]{"Chad Michaels", "Raven", "Jujubee", "Shannel"} };
            to_return.set_top_4( p_all_stars_1_top_4, 4 );

            to_return.set_num_contestants( 12 );
            std::string *p_all_stars_1_contestants{ new std::string[ to_return.get_num_contestants() ]{"Chad Michaels", "Raven", "Jujubee", "Shannel", "Alexis Mateo", "Yara Sofia", "Manila Luzon", "Latrice Royale", "Nina Flowers", "Tammie Brown", "Pandora Boxx", "Mimi Imfurst"} };
            to_return.set_contestants( p_all_stars_1_contestants, to_return.get_num_contestants() );

            std::string *p_all_stars_1_finale_songs{ new std::string[1]{"\"Responsitrannity (Matt's Pop Edit)\" by RuPaul"} };
            to_return.set_finale_songs( p_all_stars_1_finale_songs, 1 );

            to_return.set_num_episodes( 6 );

            to_return.set_guest_judges( 12 );
            to_return.set_guest_judge( "Rachel Hunter", 0 );
            to_return.set_guest_judge( "Ross Matthews", 1 );
            to_return.set_guest_judge( "Busy Phillips", 2 );
            to_return.set_guest_judge( "Vicki Lawrence", 3 );
            to_return.set_guest_judge( "Rachel Dratch", 4 );
            to_return.set_guest_judge( "Janice Dickinson", 5 );
            to_return.set_guest_judge( "Mary Wilson", 6 );
            to_return.set_guest_judge( "Rosie Perez", 7 );
            to_return.set_guest_judge( "Wendi McClendon-Lovey", 8 );
            to_return.set_guest_judge( "Elvira", 9 );
            to_return.set_guest_judge( "Beth Ditto", 10 );
            to_return.set_guest_judge( "Cheri Oteri", 11 );

            break;
        }

        case 2 : {
            to_return.set_winner( "Alaska" );
            
            std::string *p_all_stars_2_top_4{ new std::string[4]{"Alaska", "Detox", "Katya", "Roxxxy Andrews"} };
            to_return.set_top_4( p_all_stars_2_top_4, 4 );

            to_return.set_num_contestants( 10 );
            std::string *p_all_stars_2_contestants{ new std::string[ to_return.get_num_contestants() ]{"Alaska", "Detox", "Katya", "Roxxxy Andrews", "Alyssa Edwards", "Tatianna", "Phi Phi O'Hara", "Ginger Minj", "Adore Delano", "Coco Montrese"} };
            to_return.set_contestants( p_all_stars_2_contestants, to_return.get_num_contestants() );

            std::string *p_all_stars_2_finale_songs{ new std::string[1]{"\"If I Were Your Woman\" by Gladys Knight & The Pips"} };
            to_return.set_finale_songs( p_all_stars_2_finale_songs, 1 );

            to_return.set_num_episodes( 9 );

            to_return.set_guest_judges( 6 );
            to_return.set_guest_judge( "Raven-Symoné", 0 );
            to_return.set_guest_judge( "Ross Matthews", 1 );
            to_return.set_guest_judge( "Jeremy Scott", 2 );
            to_return.set_guest_judge( "Nichole Scherzinger", 3 );
            to_return.set_guest_judge( "Graham Norton", 4 );
            to_return.set_guest_judge( "Aubrey Plaza", 5 );
            
            break;
        }

        case 3 : {
            to_return.set_winner( "Trixie Mattel" );
            
            std::string *p_all_stars_3_top_4{ new std::string[4]{"Trixie Mattel", "Kennedy Davenport", "BeBe Zahara Benet", "Shangela"} };
            to_return.set_top_4( p_all_stars_3_top_4, 4 );

            to_return.set_num_contestants( 10 );
            std::string *p_all_stars_3_contestants{ new std::string[ to_return.get_num_contestants() ]{"Trixie Mattel", "Kennedy Davenport", "BeBe Zahara Benet", "Shangela", "Morgan McMichaels", "BenDeLaCreme", "Aja", "Chi Chi DeVayne", "Milk", "Thorgy Thor"} };
            to_return.set_contestants( p_all_stars_3_contestants, to_return.get_num_contestants() );

            std::string *p_all_stars_3_finale_songs{ new std::string[1]{"\"Wrecking Ball\" by Miley Cyrus"} };
            to_return.set_finale_songs( p_all_stars_3_finale_songs, 1 );

            to_return.set_num_episodes( 8 );

            to_return.set_guest_judges( 13 );
            to_return.set_guest_judge( "Vanessa Hudgens", 0 );
            to_return.set_guest_judge( "Vanessa Williams", 1 );
            to_return.set_guest_judge( "Todrick Hall", 2 );
            to_return.set_guest_judge( "Constance Zimmer", 3 );
            to_return.set_guest_judge( "Jeffrey Bowyer-Chapman", 4 );
            to_return.set_guest_judge( "Kristin Chenoweth", 5 );
            to_return.set_guest_judge( "Nicole Byer", 6 );
            to_return.set_guest_judge( "Tituss Burgess", 7 );
            to_return.set_guest_judge( "Shay Mitchell", 8 );
            to_return.set_guest_judge( "Emma Bunton", 9);
            to_return.set_guest_judge( "Adam Lambert", 10);
            to_return.set_guest_judge( "Chris Colfer", 11);
            to_return.set_guest_judge( "Garcelle Beauvais", 12);            
            
            break;
        }

        case 4 : {
            to_return.set_winner( "Monét X Change & Trinity The Tuck" );
            
            std::string *p_all_stars_4_top_4{ new std::string[4]{"Monét X Change", "Trinity The Tuck", "Monique Heart", "Naomi Smalls"} };
            to_return.set_top_4( p_all_stars_4_top_4, 4 );

            to_return.set_num_contestants( 10 );
            std::string *p_all_stars_4_contestants{ new std::string[ to_return.get_num_contestants() ]{"Shea Couleé", "Jujubee", "Miz Cracker", "Blair St. Clair", "India Ferrah", "Mayhem Miller", "Mariah Paris Balenciaga", "Ongina", "Derrick Barry"} };
            to_return.set_contestants( p_all_stars_4_contestants, to_return.get_num_contestants() );

            std::string *p_all_stars_4_finale_songs{ new std::string[1]{"\"Fighter\" by Christina Aguilera"} };
            to_return.set_finale_songs( p_all_stars_4_finale_songs, 1 );

            to_return.set_num_episodes( 10 );

            to_return.set_guest_judges( 11 );
            to_return.set_guest_judge( "Ricky Martin", 0 );
            to_return.set_guest_judge( "Tessa Thompson", 1 );
            to_return.set_guest_judge( "Madison Beer", 2 );
            to_return.set_guest_judge( "Nicole Byer", 3 );
            to_return.set_guest_judge( "Martyn Lawrence Bullard", 4 );
            to_return.set_guest_judge( "Sarah Hyland", 5 );
            to_return.set_guest_judge( "Jeffrey Bowyer-Chapman", 6 );
            to_return.set_guest_judge( "Tommy Dorfman", 7 );
            to_return.set_guest_judge( "Bebe Rexha", 8 );
            to_return.set_guest_judge( "Jane Krakowski", 9);
            to_return.set_guest_judge( "Sam Richardson", 10);
           
            break;
        }

        case 5 : {
            to_return.set_winner( "Shea Coulee" );
            
            std::string *p_all_stars_5_top_4{ new std::string[4]{"Shea Coulee", "Jujubee", "Miz Cracker", "Blair St. Clair"} };
            to_return.set_top_4( p_all_stars_5_top_4, 4 );

            to_return.set_num_contestants( 10 );
            std::string *p_all_stars_5_contestants{ new std::string[ to_return.get_num_contestants() ]{"Shea Couleé", "Jujubee", "Miz Cracker", "Blair St. Clair", "India Ferrah", "Mayhem Miller", "Mariah Paris Balenciaga", "Ongina", "Derrick Barry"} };
            to_return.set_contestants( p_all_stars_5_contestants, to_return.get_num_contestants() );

            std::string *p_all_stars_5_finale_songs{ new std::string[1]{"\"Make Me Feel\" by Janelle Monáe"} };
            to_return.set_finale_songs( p_all_stars_5_finale_songs, 1 );

            to_return.set_num_episodes( 8 );

            to_return.set_guest_judges( 11 );
            to_return.set_guest_judge( "Ricky Martin", 0 );
            to_return.set_guest_judge( "Tessa Thompson", 1 );
            to_return.set_guest_judge( "Madison Beer", 2 );
            to_return.set_guest_judge( "Nicole Byer", 3 );
            to_return.set_guest_judge( "Martyn Lawrence Bullard", 4 );
            to_return.set_guest_judge( "Sarah Hyland", 5 );
            to_return.set_guest_judge( "Jeffrey Bowyer-Chapman", 6 );
            to_return.set_guest_judge( "Tommy Dorfman", 7 );
            to_return.set_guest_judge( "Bebe Rexha", 8 );
            to_return.set_guest_judge( "Jane Krakowski", 9);
            to_return.set_guest_judge( "Sam Richardson", 10);

            to_return.set_num_lipsync_assassins( 7 );

            std::string *p_all_stars_5_lipsync_assassins{ new std::string[ to_return.get_num_lipsync_assassins() ]{"Yvie Oddly", "Alyssa Edwards", "Monét X Change", "Morgan McMichaels", "Vanessa Vanjie Mateo", "Roxxxy Andrews", "Kennedy Davenport"} };
            to_return.set_lipsync_assassins( p_all_stars_5_lipsync_assassins, to_return.get_num_lipsync_assassins() );
            
            break;
        }

        case 6 : {
            
            to_return.set_winner( "Kylie Sonique Love" );
            
            std::string *p_all_stars_6_top_4{ new std::string[4]{"Kylie Sonique Love", "Eureka!", "Ginger Minj", "Raj'ah O'Hara"} };
            to_return.set_top_4( p_all_stars_6_top_4, 4 );

            to_return.set_num_contestants( 13 );
            std::string *p_all_stars_6_contestants{ new std::string[ to_return.get_num_contestants() ]{"Kylie Sonique Love", "Eureka!", "Ginger Minj", "Raj'ah O'Hara", "Trinity K. Bonet", "Pandora Boxx", "Jan", "Akeria C. Davenport", "Scarlet Envy", "Yara Sofia", "Silky Nutmeg Ganache", "Jiggly Caliente", "Serena ChaCha"} };
            to_return.set_contestants( p_all_stars_6_contestants, to_return.get_num_contestants() );

            std::string *p_all_stars_6_finale_songs{ new std::string[1]{"\"Stupid Love\" by Lady Gaga"} };
            to_return.set_finale_songs( p_all_stars_6_finale_songs, 1 );

            to_return.set_num_episodes( 12 );

            to_return.set_guest_judges( 9 );
            to_return.set_guest_judge( "Big Freedia", 0 );
            to_return.set_guest_judge( "Tia Mowry", 1 );
            to_return.set_guest_judge( "Jamal Sims", 2 );
            to_return.set_guest_judge( "Aisha Tyler", 3 );
            to_return.set_guest_judge( "Emma Roberts", 4 );
            to_return.set_guest_judge( "Zaldy", 5 );
            to_return.set_guest_judge( "Tina Knowles", 6 );
            to_return.set_guest_judge( "Charli XCX", 7 );
            to_return.set_guest_judge( "Justin Simien", 8 );

            to_return.set_num_lipsync_assassins( 10 );

            std::string *p_all_stars_6_lipsync_assassins{ new std::string[ to_return.get_num_lipsync_assassins() ]{"Coco Montrese", "Brooke Lynn Hytes", "Laganja Estranja", "Jessica Wild", "Mayhem Miller", "Manila Luzon", "Alexis Mateo", "Heidi N Closet", "Kameron Michaels", "Jaida Essence Hall"} };
            to_return.set_lipsync_assassins( p_all_stars_6_lipsync_assassins, to_return.get_num_lipsync_assassins() );
            
            break;
        }

        default : { throw std::logic_error{ "An error has occured... This wasn't supposed to happen..." }; }

    }

    return to_return;

}