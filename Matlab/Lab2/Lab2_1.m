% Create a cell array with various data types
data = {'Ahmed', 10, pi, 'Ahmed abdelhamed'};

% Access and display specific elements
name = data{1};
number = data{2};
constant = data{3};
fullname = data{4};
disp(['Name:', name]);
disp(['Number:', num2str(number)]);
disp(['Constant:', num2str(constant)]);
disp(['Full name:', fullname]);

% Create a structure to store person information
person.name = 'mohamed';
person.age = 30;
person.city = 'New York';
% Access and display structure fields
disp(['Name:', person.name]);
disp(['Age:', num2str(person.age)]);
disp(['City:', person.city]);

% Create a character array with your name
name = 'Ahmed Abdelhamed';

% Concatenate your name with another string
greeting = ['Hello, ', name];

% Display the results
disp(name);
disp(greeting);

% Enter a number
number = input('Enter a number: ');
% Check if even or odd
if mod(number, 2) == 0
  disp('The number is even.');
else
  disp('The number is odd.');
end

% Generate data for a sine wave (adjust x values as needed)
x = linspace(0, 2*pi, 100);
y = sin(x);
% Create a plot with labels and legend
plot(x, y);
xlabel('X');
ylabel('Y');
title('Sine wave');
legend('Sine');

% Generate and display a sequence of numbers (1 to 10)
for i = 1:10
  disp(i);
end
% Enter a number
number = input('Enter a number: ');

% Check if even or odd
if mod(number, 2) == 0
  disp('The number is even.');
else
  disp('The number is odd.');
end
