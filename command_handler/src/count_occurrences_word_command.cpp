//
// Created by boa on 04.08.17.
//
#include <iostream>


#include "../include/count_occurrences_word_command.hpp"

namespace word_counter {
    namespace command_handler {

        CountOccurrencesWordCommand::CountOccurrencesWordCommand(std::string &filename,
                                                                 std::string &searchWord)
                : filename_(std::move(filename)),
                  searchWord_(std::move(searchWord)) {
            std::cout << "CountOccurrencesWordCommand, fn = " << filename_ << " sw = " << searchWord_ << std::endl;
        }

        void CountOccurrencesWordCommand::execute() {
            std::cout << "CountOccurrencesWordCommand::execute()" << std::endl;
        }


    }//namespace command_handler
}//namespace word_counter

