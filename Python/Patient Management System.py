import sqlite3

# Connect to SQLite database
conn = sqlite3.connect('patients.db')
c = conn.cursor()

# Create patients table
c.execute('''CREATE TABLE IF NOT EXISTS patients (
             id INTEGER PRIMARY KEY,
             name TEXT NOT NULL,
             dob TEXT NOT NULL,
             address TEXT,
             phone TEXT
             )''')
conn.commit()

# Function to add a new patient
def add_patient(name, dob, address=None, phone=None):
    c.execute('''INSERT INTO patients (name, dob, address, phone)
                 VALUES (?, ?, ?, ?)''', (name, dob, address, phone))
    conn.commit()
    print("Patient added successfully.")

# Function to display all patients
def display_patients():
    c.execute("SELECT * FROM patients")
    patients = c.fetchall()
    for patient in patients:
        print(patient)

# Function to search for a patient by name
def search_patient(name):
    c.execute("SELECT * FROM patients WHERE name=?", (name,))
    patient = c.fetchone()
    if patient:
        print(patient)
    else:
        print("Patient not found.")

# Add some example patients
add_patient("John Doe", "1990-05-20", "123 Main St", "555-1234")
add_patient("Jane Smith", "1985-10-15", "456 Elm St", "555-5678")

# Display all patients
print("All Patients:")
display_patients()

# Search for a patient
print("\nSearch Results:")
search_patient("John Doe")

# Close database connection
conn.close()
