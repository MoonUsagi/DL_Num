%% Classification_Learner_2
% Fred Liu 
% 20240702
%% Load Data
load fisheriris

inds = ~strcmp(species,'setosa');
X = meas(inds,3:4);
y = species(inds);
inds = double(inds(1:100));
Final = [X,inds];