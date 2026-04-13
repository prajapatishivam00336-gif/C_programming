import re

# Input from user
phone = input("Enter phone number: ")
email = input("Enter email ID: ")

# Regex patterns
phone_pattern = r"^[6-9]\d{9}$"   # 10 digits, starts with 6-9
email_pattern = r"^[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\.[a-zA-Z]{2,}$"

# Validate phone number
if re.fullmatch(phone_pattern, phone):
    print("Valid Phone Number")
else:
    print("Invalid Phone Number")

# Validate email ID
if re.fullmatch(email_pattern, email):
    print("Valid Email ID")
else:
    print("Invalid Email ID")
