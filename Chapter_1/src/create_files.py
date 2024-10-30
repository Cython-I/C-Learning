def create_c_files(start, end):
    for i in range(start, end + 1):
        # Format the filename
        filename = f"Exercise_1_{i:02d}.c"
        # Create the file and write a simple comment in it
        with open(filename, 'w') as f:
            f.write("// This is Exercise 1-{i:02d}\n")
        print(f"Created file: {filename}")

# Define the range for the files
start_number = 1
end_number = 24

# Call the function to create the files
create_c_files(start_number, end_number)