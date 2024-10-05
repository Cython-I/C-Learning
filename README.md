# C- Learning
This is a repo of my learning of C with the book "The C Programming Language" by Brian W. K. and Dennis M. R. . The examples in this repo are my solutions to the examples written in the book, and may include code segments from the book as well. This is meant as a learning repo and this not reflect my experience. 

### Running Files

    cc "name_of_file" -o "name_of_exe"

will generate a .o file that can than be ran in the terminal:

    ./"name_of_exe"

I decided to stick to this convention rather than using make files to mirror the learning of the book

### Formating:
.clang-format is used to format all c files to Microsoft coding standards. 
    
    clang-format -i "name_of_src_file"

will adjust the file to match the format specified in the .clang-format file
