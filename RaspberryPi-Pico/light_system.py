from machine import ADC, Pin
import time

# Initialize LDR sensor (connected to ADC pin GP26)
ldr = ADC(26)

# Initialize LED (connected to GP15)
led = Pin(15, Pin.OUT)

print("=== Automatic Street Light System ===")
print("Monitoring light intensity...\n")

try:
    while True:
        # Read LDR value (0 - 65535)
        light = ldr.read_u16()

        # Display light level
        print("Light Level:", light)

        # Check if it is dark
        if light < 20000:
            print("🌙 Dark - Light ON")
            led.value(1)
        else:
            print("☀ Bright - Light OFF")
            led.value(0)

        print("----------------------")

        # Wait for 1 second
        time.sleep(1)

except KeyboardInterrupt:
    led.value(0)
    print("\nProgram Stopped")