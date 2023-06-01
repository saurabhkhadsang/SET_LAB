import pandas as pd

import numpy as np

from sklearn.model_selection import train_test_split

# Load the dataset

# Dataset 3-

https://archive.ics.uci.edu/ml/datasets/Appliances+energy+prediction

# Appliances energy prediction Data Set

data = pd.read_csv('energydata_complete.csv')
![Screenshot 2023-04-27 130424](https://github.com/saurabhkhadsang/SET_LAB/assets/84808913/84588255-972e-4252-8dea-58b818a20aa0)

# Clean the data

data.dropna(inplace=True)

# Split the data into training and testing sets

x = data.iloc[:, 1].values

y = data.iloc[:, 2].values

x = x.reshape(-1,1)

# X_train, X_test, y_train, y_test = train_test_split(X, y, test_size=0.2, 

random_state=0)

X_train, X_test, y_train, y_test = train_test_split(x, y, test_size=0.2, 

random_state=0)

from sklearn.linear_model import LinearRegression

# Train the linear regression model

regressor = LinearRegression()

regressor.fit(X_train, y_train)

from sklearn.metrics import mean_squared_error, r2_score

# Predict the target values for the testing data

y_pred = regressor.predict(X_test)

# Evaluate the model performance

mse = mean_squared_error(y_test, y_pred)

r2 = r2_score(y_test, y_pred)

print('Mean Squared Error:', mse)

print('R-Squared Score:', r2)

!pip install matplotlib

import matplotlib.pyplot as plt

import numpy as np

from sklearn.linear_model import LinearRegression

# Fitting the model

reg = LinearRegression().fit(x, y)

# Indepedent variable : Appliances

# Depedent vairabke : Light

# Plotting the data and regression line

plt.scatter(x, y, color='blue')

plt.plot(x, reg.predict(x), color='red')

plt.xlabel('Independent variable')

plt.ylabel('Dependent variable')

plt.title('Linear Regression')

plt.show()
