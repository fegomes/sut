//
// Created by @fegomes on 11/03/18.
//

#include <spdlog/spdlog.h>

int main(){

    auto console = spdlog::stderr_color_st("console");
    console->info("Starting generate unit test");

    


    console->info("Finish!");

    return 0;
}

