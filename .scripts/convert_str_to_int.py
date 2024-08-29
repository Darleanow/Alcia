import json

def convert_strings_to_integers(d):
    if isinstance(d, dict):
        for k, v in d.items():
            d[k] = convert_strings_to_integers(v)
    elif isinstance(d, list):
        d = [convert_strings_to_integers(i) for i in d]
    elif isinstance(d, str):
        # Attempt to convert string to integer
        try:
            return int(d)
        except ValueError:
            pass
    return d

def process_json_file(input_file_path, output_file_path):
    # Read the JSON file
    with open(input_file_path, 'r') as infile:
        data = json.load(infile)
    
    # Convert strings to integers
    converted_data = convert_strings_to_integers(data)
    
    # Write the modified JSON to a new file
    with open(output_file_path, 'w') as outfile:
        json.dump(converted_data, outfile, indent=4)

# Replace these with your file paths
input_file_path = 'Enemies.json'
output_file_path = 'output.json'

process_json_file(input_file_path, output_file_path)
