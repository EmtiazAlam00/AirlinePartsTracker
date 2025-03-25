**Airline Parts Tracker System**

This project is a C++-Developed Parts Control System for an Airline. The system tracks aircraft, their installed parts, and ensures parts are inspected and changed according to aviation regulations. This project demonstrates multiple inheritance, polymorphism, the Observer pattern, operator overloading, and templates.

**Features**

- _Aircraft Management_: Track multiple aircraft with unique registrations.
- _Parts Tracking_: Monitor parts installed on aircraft.
- _Inspection System_: Identify parts that require inspection based on flight hours and installation duration.
- _Inheritance and Polymorphism_: Parts use multiple inheritance to determine inspection criteria.
- _Custom Data Structures_: Implementation of a templated Array class for storing various data types.
- _Observer Pattern_: Notification system for inspections.

**Learning Outcomes**

This project explores key software engineering principles:

1. Multiple inheritance and diamond hierarchy
2. Polymorphism
3. Observer design pattern
4. Operator overloading (<< instead of print methods)
5. Templates for generic data structures

**Class Structure**

**Entity Classes:**

- Date: Handles date operations.

- Part: Base class for all parts.
- FH_Part: Requires inspection based on flight hours.
- IT_Part: Requires inspection based on installation duration.
- FHIT_Part: Requires inspection based on both flight hours and installation time.
- Aircraft: Stores aircraft details and installed parts.

**Container Classes:**

- Array<T>: A templated data structure for storing various elements.

**Control and View Classes:**
  
- Airline: Manages aircraft, parts, and inspections.
- Control: Provides test framework.
- View: Handles user input and system output.

**Example Usage**

1. Add an aircraft
2. Add a part
3. Install a part on an aircraft
4. Record flight hours
5. Generate an inspection report

**Future Improvements**

Implement a GUI for better visualization.

Integrate with a database for persistent data storage.

Extend with networking features to simulate real-time tracking.
