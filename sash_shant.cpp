#ifndef DR_SASH_SHANT
#define DR_SASH_SHANT
#include <iostream>
#include "lvl_two.hpp"

Sash_Shant::Sash_Shant() {
    Shantay_Season();
    this->double_sashay = "";
}

Sash_Shant::~Sash_Shant() {}

void Sash_Shant::print ( unsigned int i_intent ) {

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

            std::cout << "The queens that were saved and lived to lipsync another day on this season were " << this->get_double_shantay();

            break;
        }

        case 8 : {
            
            std::cout << "The queens that had to double sashay were " << this->get_double_sashay();

            break;

        }

    }

}

std::string Sash_Shant::get_double_sashay() { return this->double_sashay; }
        
void Sash_Shant::set_double_sashay( std::size_t i_placement_1, std::size_t i_placement_2 ) { this->double_sashay = ( get_contestant( i_placement_1 ) + ", " + get_contestant(i_placement_2) ); }

#endif