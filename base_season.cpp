#include <iostream>
#include "base_season.hpp"

// Function Definitions
Season::Season() :
    winner{},
    p_top_4{nullptr},
    p_contestants{nullptr},
    num_contestants{},
    p_finale_songs{nullptr},
    num_finale_songs{},
    num_episodes{},
    p_guest_judges{nullptr},
    num_guest_judges{} { /* Empty constructor, simply initializes member variables to default values */ }

Season::~Season() {
    delete[] this->p_top_4;
    this->p_top_4 = nullptr;

    delete[] this->p_contestants;
    this->p_contestants = nullptr;

    delete[] this->p_finale_songs;
    this->p_finale_songs = nullptr;

    delete[] this->p_guest_judges;
    this->p_guest_judges = nullptr;
}

std::string Season::get_winner() { return this->winner; }

void Season::set_winner( std::string i_winner ) { this->winner = i_winner; }

std::string* Season::get_top_4() {
    return this->p_top_4;
}

void Season::set_top_4( std::string *&p_i_top_4, std::size_t i_capacity ) {
    
    if ( this->p_top_4 != nullptr ) {
        delete[] this->p_top_4;
        this->p_top_4 = nullptr;
    }
    
    this->p_top_4 = new std::string[4]{};
    for ( std::size_t index{0}; index < i_capacity; ++index ) {
        this->p_top_4[index] = p_i_top_4[index];
    }

    delete[] p_i_top_4;
    p_i_top_4 = nullptr;

}
        
std::string Season::get_contestant( std::size_t i_placement ) {
    return p_contestants[i_placement];
}
        
void Season::set_contestants( std::string *&p_i_contestants, std::size_t i_capacity ) {

    if ( this->p_contestants != nullptr ) {
        delete[] this->p_contestants;
        this->p_contestants = nullptr;
    }
    
    this->p_contestants = new std::string[i_capacity];

    for ( std::size_t index{0}; index < i_capacity; ++index ) {
        this->p_contestants[index] = p_i_contestants[index];
    }

    delete[] p_i_contestants;
    p_i_contestants = nullptr;

}

std::string* Season::get_finale_songs() { return p_finale_songs; }
        
void Season::set_finale_songs( std::string *&p_i_finale_songs, std::size_t i_capacity ) {

    if ( this->p_finale_songs != nullptr ) {
        delete[] this->p_finale_songs;
        this->p_finale_songs = nullptr;
    }
    
    this->num_finale_songs = i_capacity;

    this->p_finale_songs = new std::string[this->num_finale_songs];

    for( std::size_t index{0}; index < this->num_finale_songs; ++index ) {
        this->p_finale_songs[index] = p_i_finale_songs[index];
    }

    delete[] p_i_finale_songs;
    p_i_finale_songs = nullptr;

}

std::size_t Season::get_num_finale_songs() { return this->num_finale_songs; }

int Season::get_num_episodes() { return this->num_episodes; }

void Season::set_num_episodes( int i_num_episodes ) { this->num_episodes = i_num_episodes; }

std::size_t Season::get_num_contestants() { return this->num_contestants; }

void Season::set_num_contestants( int i_num_contestants ) { this->num_contestants = i_num_contestants; }

void Season::set_guest_judges ( std::size_t i_capacity ) {

    if ( this->p_guest_judges != nullptr ) {
        delete[] this->p_guest_judges;
        this->p_guest_judges = nullptr;
    }

    this->num_guest_judges = i_capacity;

    this->p_guest_judges = new std::string[i_capacity];

}

void Season::set_guest_judge( std::string i_guest_judge, std::size_t index ) { this->p_guest_judges[index] = i_guest_judge; }

std::string* Season::get_guest_judges() { return this->p_guest_judges; }

std::size_t Season::get_num_guest_judges() { return this->num_guest_judges; }

void Season::print ( unsigned int i_intent ) {

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

    }

}