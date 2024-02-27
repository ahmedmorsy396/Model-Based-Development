C=1;
R=1;
mdl = gcs;   
    res = sim(mdl);
    plot(res.logsout.get('Vc').Values); 
    

