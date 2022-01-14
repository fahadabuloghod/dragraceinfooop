#include <iostream>
#include "lvl_one.hpp"

All_Stars::All_Stars() {
    Season();
    this->p_lipsync_assassins = nullptr;
    this->set_num_lipsync_assassins(0);
}

All_Stars::~All_Stars() {
    delete[] this->p_lipsync_assassins;
    this->p_lipsync_assassins = nullptr;    
}

void All_Stars::print ( unsigned int i_intent ) {

    switch ( i_intent ) {
        
        case 0 : {

            std::cout << this->get_winner() << " won the season!";

            break;
        }

        case 1 : {
            
            std::string *p_temp_top_4{ this->get_top_4() };
            
            std::cout << "The top 4 of the season were ";
            
            std::cout << p_temp_top_4[0] << ", ";
            std::cout << p_temp_top_4[1] << ", ";
            std::cout << p_temp_top_4[2] << ", ";
            std::cout << p_temp_top_4[3];

            p_temp_top_4 = nullptr;

            break;
        }

        case 2 : {

            std::cout << "The contestants on the season were ";
            
            std::cout << this->get_contestant( 0 );

            for ( std::size_t index{1}; index < this->get_num_contestants(); ++index ) {
                std::cout << ", " << this->get_contestant( index );
            }

            break;
        }

        case 3 : {

            std::string *p_local{this->get_finale_songs()};

            std::cout << "The ipsync song(s) that were played at the season finale were ";

            for ( std::size_t index{0}; index < this->get_num_finale_songs(); ++index ) {
                std::cout << p_local[index];

                if ( index != ( this->get_num_finale_songs() - 1 ) ) {
                    std::cout << ", ";
                }

            }

            p_local = nullptr;

            break;
        }

        case 4 : {

            std::cout << "The season had " << this->get_num_episodes() << " episodes";

            break;
        }

        case 5 : {

            std::cout << "The season had " << this->get_num_contestants() << " contestants";

            break;
        }

        case 6 : {

            std::string *p_loc{ this->get_guest_judges() };

            std::cout << "The guest judges that appeared on the season were " << p_loc[0];

            for ( std::size_t index{1}; index < this->get_num_guest_judges(); ++index ) {
                std::cout << ", " << p_loc[index];
            }

            p_loc = nullptr;

            break;
        }

        case 7 : {

            std::cout << "The lipsync assassins that showed up throughout the season were ";

            std::string *p_local{ this->get_lipsync_assassins() };

            std::cout << p_local[0];

            for ( std::size_t index{1}; index < this->get_num_lipsync_assassins(); ++index ) {
                std::cout << ", " << p_local[index];
            }

            p_local = nullptr;

            break;
        }

    }

}


std::string* All_Stars::get_lipsync_assassins() { return this->p_lipsync_assassins; }

void All_Stars::set_lipsync_assassins( std::string *&i_p_lipsync_assassins, std::size_t i_capacity ) {
    
    if ( this->p_lipsync_assassins != nullptr ) {
        delete[] this->p_lipsync_assassins;
        this->p_lipsync_assassins = nullptr;
    }

    this->p_lipsync_assassins = new std::string[this->get_num_lipsync_assassins()];

    for ( std::size_t index{0}; index < this->get_num_lipsync_assassins(); ++index ) {
        p_lipsync_assassins[index] = i_p_lipsync_assassins[index];
    }

    delete[] i_p_lipsync_assassins;
    i_p_lipsync_assassins = nullptr;

}

std::size_t All_Stars::get_num_lipsync_assassins() { return this->num_lipsync_assassins; }

void All_Stars::set_num_lipsync_assassins( std::size_t i_capacity ) { this->num_lipsync_assassins = i_capacity; }
