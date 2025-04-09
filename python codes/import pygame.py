import pygame
import random
import sys

# Initialize
pygame.init()
WIDTH, HEIGHT = 800, 600
screen = pygame.display.set_mode((WIDTH, HEIGHT))
pygame.display.set_caption("Catch the Ball Game")

# Colors
WHITE = (255, 255, 255)
BLACK = (0, 0, 0)
BALL_COLOR = (255, 0, 0)
BASKET_COLOR = (0, 255, 0)

# Game variables
ball_radius = 20
ball_x = random.randint(ball_radius, WIDTH - ball_radius)
ball_y = 0
ball_speed = 5

basket_width, basket_height = 100, 20
basket_x = WIDTH // 2 - basket_width // 2
basket_y = HEIGHT - 40
basket_speed = 10

score = 0
font = pygame.font.SysFont(None, 36)

clock = pygame.time.Clock()

# Game loop
running = True
while running:
    screen.fill(WHITE)
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            running = False

    # Basket movement
    keys = pygame.key.get_pressed()
    if keys[pygame.K_LEFT] and basket_x > 0:
        basket_x -= basket_speed
    if keys[pygame.K_RIGHT] and basket_x < WIDTH - basket_width:
        basket_x += basket_speed

    # Ball movement
    ball_y += ball_speed
    if ball_y > HEIGHT:
        ball_y = 0
        ball_x = random.randint(ball_radius, WIDTH - ball_radius)

    # Collision detection
    if (basket_y < ball_y + ball_radius < basket_y + basket_height and
            basket_x < ball_x < basket_x + basket_width):
        score += 1
        ball_y = 0
        ball_x = random.randint(ball_radius, WIDTH - ball_radius)

    # Draw ball and basket
    pygame.draw.circle(screen, BALL_COLOR, (ball_x, ball_y), ball_radius)
    pygame.draw.rect(screen, BASKET_COLOR, (basket_x, basket_y, basket_width, basket_height))

    # Draw score
    score_text = font.render(f"Score: {score}", True, BLACK)
    screen.blit(score_text, (10, 10))

    pygame.display.flip()
    clock.tick(60)

pygame.quit()
sys.exit()
