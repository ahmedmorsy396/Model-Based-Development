
%Part 1 Creating Numeric Arrays
A=[3 2 1 ; 6 5 4; 9 8 7];
B = [12 11 10 ; 15 14 13; 18 17 16];
Sum=A+B;

%part2 Matrix Concatenation
rowVector=1:5;
ColumVector=6:10;
horizontalConcat=horzcat(rowVector,ColumVector);

%Part 3: Using repmat Function
originalMatrix=[1 5;7 8];
repeatedMatrix=repmat(originalMatrix,2,2);