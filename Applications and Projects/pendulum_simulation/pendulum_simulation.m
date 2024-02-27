g=9.81;
L=1;
mdl = gcs;  
LValue = 1:2:9; 
for i = 1:numel(LValue)
    L = LValue(i); 
    res = sim(mdl);
    plot(res.logsout.get('angular displacement  (rad).').Values); 
    hold on
    disp("Simulation " + num2str(i) + " compelete"); 
    LegendLables{i} = "L = " + num2str(L); 
end
legend(LegendLables);