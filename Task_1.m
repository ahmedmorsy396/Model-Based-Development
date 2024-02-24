% Numeric Types
intVar = 10;                 
doubleVar = 3.14159;       

% Creating Numeric Arrays
evenNumbers = [2 4 6 8 10];    
primeNumbers = [2; 3; 5; 7; 11];  
primeNumbers_row = primeNumbers'; 

% Specialized Matrix Functions
identityMatrix = eye(3);      
resized_identityMatrix = identityMatrix(1:2, :);
magicSquare = magic(2);      

% Matrix Concatenation
combinedVector = [evenNumbers, primeNumbers_row];  
combinedMatrix = [resized_identityMatrix, magicSquare];



