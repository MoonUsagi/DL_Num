%% GRU
% Fred Liu 
% 20240702

%%
layer = gruLayer(100,Name="gru1")

%%
%
inputSize = 12;
numHiddenUnits = 100;
numClasses = 9;

layers = [ ...
    sequenceInputLayer(inputSize)
    gruLayer(numHiddenUnits)
    fullyConnectedLayer(numClasses)
    softmaxLayer]