
CREATE TABLE Employees (
    EmployeeID INT PRIMARY KEY,
    FirstName VARCHAR(50) NOT NULL,
    LastName VARCHAR(50) NOT NULL,
    Department VARCHAR(50),
    Salary DECIMAL(10, 2),
    HireDate DATE
);
INSERT INTO Employees (EmployeeID, FirstName, LastName, Department, Salary, HireDate)
VALUES 
(1, 'Hamza', 'Ali', 'Secret service', 650000.00, '2022-03-15'),
(2, 'john', 'sinha', 'WWE', 85000.00, '2011-11-01'),
(3, 'monu', 'singh', 'teen patti', 72000.00, '2023-01-10'),
(4, 'abhijit', 'dipke', 'activist', 9500.00, '2020-05-24');


