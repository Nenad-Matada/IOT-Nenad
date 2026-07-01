import tensorflow as tf
import numpy as np

X = np.array([[0.1],[0.2],[0.3],[0.8],[0.9],[1.0]])
y = np.array([0,0,0,1,1,1])  # 0 = Noise, 1 = Clap

model = tf.keras.Sequential([
    tf.keras.layers.Dense(8, activation='relu', input_shape=(1,)),
    tf.keras.layers.Dense(1, activation='sigmoid')
])
model.compile(optimizer='adam', loss='binary_crossentropy', metrics=['accuracy'])

model.fit(X, y, epochs=100)
model.save("clap_model.h5")

