#include <filesystem>
#include <iostream>
  
int main(int argc, char *argv[]) {
    if (argc != 3) {
        std::cout << "Usage: " << argv[0] << " src_file dest_file\n";
        return 1;
    }

    try {
        std::filesystem::copy_file(argv[1], argv[2]);
    }
    catch (std::filesystem::filesystem_error& e) {
        std::cout << e.what() << '\n';
        return 1;
    }

    return 0;
}
