% Initialize loop counter
i = 2;
% Use a while loop to print even numbers
while i <= 20
  fprintf("%d ", i);  
  i = i + 2;         
end

fprintf("\n");  

% Prompt user to enter a number
n = input("Enter an integer: ");

% Initialize factorial
factorial = 1;

% Calculate factorial using a while loop
i = 1;
while i <= n
  factorial = factorial * i;
  i = i + 1;
end

% Display the result
fprintf("The factorial of %d is %d\n", n, factorial);


% Prompt user for transportation mode
mode = input("Enter transportation mode (car, train, bus, airplane): ", 's');

% Calculate cost based on mode using a switch statement
switch lower(mode)  
  case 'car'
    cost_per_mile = 0.25;
  case 'train'
    cost_per_mile = 0.15;
  case 'bus'
    cost_per_mile = 0.10;
  case 'airplane'
    cost_per_mile = 0.50;
  otherwise
    error("Invalid transportation mode. Please enter car, train, bus, or airplane.");
end
  fprintf("Cost per mile: %.2f\n", cost_per_mile);

% Prompt user for color code
color_code = input("Enter color code (e.g., 'red', 'rgb(255,0,0)': ", 's');

% Translate color code using a switch statement
switch lower(color_code)
  case 'red'
    color_name = 'Red';
  case 'green'
    color_name = 'Green';
  case 'blue'
    color_name = 'Blue';
  case 'yellow'
    color_name = 'Yellow';
  case 'black'
    color_name = 'Black';
  otherwise
    color_name = 'Unknown color';
end

% Display the result
fprintf("Color name: %s\n", color_name);
