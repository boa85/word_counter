//
// Created by boa on 04.08.17.
//

#ifndef WORD_COUNTER_CHECKSUM_COMMAND_HPP
#define WORD_COUNTER_CHECKSUM_COMMAND_HPP

#include <string>

#include "icommand.hpp"

namespace word_counter {
    namespace command_handler {
        class ChecksumCommand : public ICommand {
        public:
            ChecksumCommand(const std::string &filename);

            void execute() override;
        };
    }
}


#endif //WORD_COUNTER_CHECKSUM_COMMAND_HPP
