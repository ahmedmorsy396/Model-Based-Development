% 1. Modeling a First-Order System:**
K=1;
T=2;
num=[0 K];
den=[1 T];
t_f=tf(num,den);
step(t_f)
hold on
% usually the system in first_order will be stable

% 2. Analyzing the System Response:**
System_info=stepinfo(t_f);

% 3. Exploring Different Scenario:**
K=1;
T=3;
num_2=[0 K];
den_2=[1 T];
t_f2=tf(num_2,den_2);
step(t_f2)
System_info2=stepinfo(t_f2);
% note: when the time response increase the transianse response will improve

% 4. Ramp Input Response:**
t=1:0.1:10;
u_ramp=0.1*t;
[System_ramp,T]=lsim(t_f,u_ramp,t);
plot(T,System_ramp)

% 5. Parabolic Input Response:**
u_parabolic = 0.01 * t.^2;
[System_parabolic,T2]=lsim(t_f,u_parabolic,t);
plot(T2,System_parabolic)


