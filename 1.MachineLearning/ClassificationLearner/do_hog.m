%% Classification_Learner
% Fred Liu 
% 20240702
%% 

function feature_hog = do_hog(loc)
img = imread(loc);
[feature_hog,visualization] = extractHOGFeatures(img,'CellSize',[32 32]);
